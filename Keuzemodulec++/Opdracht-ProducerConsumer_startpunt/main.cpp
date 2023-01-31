#include <queue>
#include <thread>
#include <iostream>
#include <condition_variable>

int counter = 0;
bool done = false;
std::condition_variable cv;
std::mutex mtx;
std::queue<int> goods;

void producer() {
    std::cout << "Starting producer..." << std::endl;

    for (int i = 0; i < 500; ++i) {
        std::unique_lock<std::mutex> lock(mtx);
        goods.push(i);
        counter++;
        lock.unlock();
        cv.notify_one();
    }

    {
        std::unique_lock<std::mutex> lock(mtx);
        done = true;
    }
    cv.notify_all();
    std::cout << "Finished producer..." << std::endl;
}

void consumer() {
    std::cout << "Starting consumer..." << std::endl;

    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{return done || !goods.empty();});
        if (goods.empty() && done)
            break;
        goods.pop();
        counter--;
    }

    std::cout << "Finished consumer..." << std::endl;
}

int main() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    std::cout << "Net: " << counter << " " << goods.size() << std::endl;
}
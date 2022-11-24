//
// Created by david on 22/11/2022.
//

#include "Queue.h"
#include "iostream"
template<class T>
int Queue<T>::size() {
    return queue.size();
}

template<class T>
T Queue<T>::pop() {
    std::cout << "Pre pop " << queue << std::endl;
    T object = queue.begin();

    std::remove(queue.begin(), queue.end(),0);
    std::cout << "Post pop " << queue << std::endl;
    return object;
}

template<class T>
void Queue<T>::put(T object) {
    std::cout << "Pre put " << queue << std::endl;
    queue.push_back(object);
    std::cout << "Post put " << queue << std::endl;
}

template<class T>
Queue<T>::Queue() {
    queue = std::vector<T>();
}
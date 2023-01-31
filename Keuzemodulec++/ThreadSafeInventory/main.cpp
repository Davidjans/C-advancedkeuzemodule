#include <iostream>
#include <mutex>
#include <thread>
#include "Inventory.h"

int main() {
    Inventory inv;
    std::thread t1([&inv] {
        for (int i = 0; i < 10; i++) {
            inv.put(i);
        }
    });
    std::thread t2([&inv] {
        for (int i = 10; i < 20; i++) {
            inv.put(i);
        }
    });
    t1.join();
    t2.join();
    for (int i = 0; i < 20; i++) {
        std::cout << inv.get() << " ";
    }
    return 0;
}

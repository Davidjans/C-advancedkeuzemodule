//
// Created by david on 1/24/2023.
//

#ifndef THREADSAFEINVENTORY_INVENTORY_H
#define THREADSAFEINVENTORY_INVENTORY_H
#include <vector>
#include <mutex>


class Inventory {
private:
    std::vector<int> items;
    std::mutex mtx;

public:
    void put(int item);
    int get();
};


#endif //THREADSAFEINVENTORY_INVENTORY_H

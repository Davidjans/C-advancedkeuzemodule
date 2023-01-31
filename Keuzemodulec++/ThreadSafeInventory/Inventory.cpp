//
// Created by david on 1/24/2023.
//

#include "Inventory.h"

void Inventory::put(int item)  {
    std::lock_guard<std::mutex> lock(mtx);
    items.push_back(item);
}

int Inventory::get() {
    std::lock_guard<std::mutex> lock(mtx);
    int item = items.back();
    items.pop_back();
    return item;
}
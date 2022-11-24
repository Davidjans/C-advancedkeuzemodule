//
// Created by david on 22/11/2022.
//

#ifndef OPDRACHT2_QUEUE_H
#define OPDRACHT2_QUEUE_H
#include "vector"
template<class T>
class Queue {
    std::vector<T> queue;

public:
    Queue();
    void put(T object);
    T pop();
    int size();
};


#endif //OPDRACHT2_QUEUE_H

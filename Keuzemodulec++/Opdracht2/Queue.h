//
// Created by david on 22/11/2022.
//

#ifndef OPDRACHT2_QUEUE_H
#define OPDRACHT2_QUEUE_H
#include "vector"
#include <iostream>

template<class T>
class Queue {
    std::vector<T> queue;

    void printVector(std::string prefix){
        std::for_each(queue.begin(),queue.end(),[&prefix](auto type){ std::cout << prefix << type << std::endl;});
        std::cout << std::endl;
    }

public:
    int size() {
        return queue.size();
    }
    T pop() {

        //printVector("Pre pop");
        T object = queue.front();
        queue.erase(queue.begin());
        printVector("Post pop");
        return object;
    }

    void put(T object) {
        //printVector("Pre put");
        queue.push_back(object);
        printVector("Post put");
    }
    Queue() {
        queue = std::vector<T>();
    }
};


#endif //OPDRACHT2_QUEUE_H

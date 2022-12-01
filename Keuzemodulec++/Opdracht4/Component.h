//
// Created by david on 01/12/2022.
//

#ifndef OPDRACHT4_COMPONENT_H
#define OPDRACHT4_COMPONENT_H


#include <string>

class Component {
    public:
        virtual ~Component() = default;
        virtual std::string Operation() const = 0;
};


#endif //OPDRACHT4_COMPONENT_H

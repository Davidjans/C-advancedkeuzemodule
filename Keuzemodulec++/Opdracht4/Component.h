//
// Created by david on 19/12/2022.
//

#ifndef OPDRACHT4_COMPONENT_H
#define OPDRACHT4_COMPONENT_H


#include <string>

class Component {


public:
    std::string name;
    Component();
    virtual ~Component();

    virtual void render() = 0;
};


#endif //OPDRACHT4_COMPONENT_H

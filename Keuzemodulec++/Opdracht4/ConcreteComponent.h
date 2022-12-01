//
// Created by david on 01/12/2022.
//

#ifndef OPDRACHT4_CONCRETECOMPONENT_H
#define OPDRACHT4_CONCRETECOMPONENT_H


#include "Component.h"

class ConcreteComponent : public Component {
public:
    std::string Operation() const override;
};


#endif //OPDRACHT4_CONCRETECOMPONENT_H

//
// Created by david on 01/12/2022.
//

#ifndef OPDRACHT4_DECORATOR_H
#define OPDRACHT4_DECORATOR_H


#include "Component.h"

class Decorator : public Component {
protected:
    Component* component_;

public:
    Decorator(Component* component) : component_(component);
    /**
     * The Decorator delegates all work to the wrapped component.
     */
    std::string Operation() const override {
        return this->component_->Operation();
    }
};


#endif //OPDRACHT4_DECORATOR_H

//
// Created by david on 19/12/2022.
//

#ifndef OPDRACHT4_DECORATOR_H
#define OPDRACHT4_DECORATOR_H


#include "Component.h"

class Decorator : public Component {
private:
    Component* theDecorator;
public:
    Decorator(Component* w);
    virtual ~Decorator();

    virtual void render();
};


#endif //OPDRACHT4_DECORATOR_H

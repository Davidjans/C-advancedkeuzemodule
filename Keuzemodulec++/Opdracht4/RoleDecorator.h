//
// Created by david on 19/12/2022.
//

#ifndef OPDRACHT4_ROLEDECORATOR_H
#define OPDRACHT4_ROLEDECORATOR_H


#include "Decorator.h"

class RoleDecorator : public Decorator {
public:
    RoleDecorator(Component *w, std::string roleName);
    virtual ~RoleDecorator();

    void render();
};



#endif //OPDRACHT4_ROLEDECORATOR_H

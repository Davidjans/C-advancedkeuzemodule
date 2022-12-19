//
// Created by david on 19/12/2022.
//

#include <iostream>
#include "RoleDecorator.h"

RoleDecorator::RoleDecorator(Component *w, std::string roleName) : Decorator(w) {
    name = roleName;
}

void RoleDecorator::render() {
    Decorator::render();
    std::cout << "RoleName: " << name << std::endl;

}

RoleDecorator::~RoleDecorator() {

}

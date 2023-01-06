//
// Created by david on 19/12/2022.
//

#include <iostream>
#include "RaceDecorator.h"

RaceDecorator::~RaceDecorator() {

}

RaceDecorator::RaceDecorator(Component *w, std::string raceName) : Decorator(w) {
    name = raceName;
}

void RaceDecorator::render(){
    Decorator::render();
    std::cout << "Race: " << name << std::endl;
}

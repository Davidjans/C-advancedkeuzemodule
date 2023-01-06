//
// Created by david on 19/12/2022.
//

#ifndef OPDRACHT4_RACEDECORATOR_H
#define OPDRACHT4_RACEDECORATOR_H


#include "Decorator.h"

class RaceDecorator : public Decorator{
public:
    RaceDecorator(Component *w, std::string raceName);
    virtual ~RaceDecorator();

    void render();
};


#endif //OPDRACHT4_RACEDECORATOR_H

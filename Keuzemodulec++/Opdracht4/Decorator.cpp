//
// Created by david on 19/12/2022.
//

#include "Decorator.h"

void Decorator::render() {
    theDecorator->render();
}

Decorator::~Decorator() {
    if (theDecorator) delete theDecorator;
}

Decorator::Decorator(Component *w) {
    theDecorator = w;
}

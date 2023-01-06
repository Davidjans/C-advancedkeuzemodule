//
// Created by david on 19/12/2022.
//

#ifndef OPDRACHT4_NPCCOMPONENT_H
#define OPDRACHT4_NPCCOMPONENT_H


#include <iostream>
#include "Component.h"

class NPCComponent : public Component {
public:
    NPCComponent(std::string npcName);
    virtual ~NPCComponent();

    void render(){
        std::cout << std::endl << std::endl << "NPCOVERVIEW: " << std::endl;
        std::cout << "NPC name: " << name << std::endl;
    }
};


#endif //OPDRACHT4_NPCCOMPONENT_H

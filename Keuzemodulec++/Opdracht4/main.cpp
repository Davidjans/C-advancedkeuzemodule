#include <iostream>
#include "RaceDecorator.h"
#include "NPCComponent.h"
#include "RoleDecorator.h"

int main() {
    Component* orcFarmer = new RaceDecorator(new RoleDecorator(new NPCComponent("Jeff the orc"),"Farmer"), "Orc");
    orcFarmer->render();

    Component* elfSoldier = new RaceDecorator(new RoleDecorator(new NPCComponent("Belasin the elven guard"),"guard"), "Elf");
    elfSoldier->render();
    return 0;
}

#include "Druid_Abilities.h"
#include <iostream>

int main() {
    
    Druid_Abilities druid_Abilities;
    std::cout << "Welcome to Nature!" << std::endl;


    //std::cout << "You attack with a spear and deal: " << druid_Abilities.spearThrow() << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "You attack with a terrifying roar and deal: " << druid_Abilities.savageRoar() << std::endl;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << "You attack with a spear and deal: " << druid_Abilities.spearThrow() << std::endl;
    }
    
}
#include "Druid_Abilities.h"
#include "Enemy.h"
#include <iostream>

int runGame() {
    Druid_Abilities druid_Abilities;
    Enemy enemy;
    
    while (true) {

        std::cout << "You are walking through the forest and a bear attacks" << std::endl;
        std::cout << "The bear has " << enemy.enemy_Health() << "hp" << std::endl;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << "You attack with a terrifying roar and deal: " << druid_Abilities.savageRoar() << std::endl;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << "You attack with a spear and deal: " << druid_Abilities.spearThrow() << std::endl;
    }
}

int main() {
    std::cout << "Welcome to Nature!" << std::endl;
    runGame();
}
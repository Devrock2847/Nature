#include "Druid_Abilities.h"
#include "Enemy.h"
#include <iostream>

int runGame() {
    Druid_Abilities druid_Abilities;
    Enemy enemy;
    
    while (true) {
        int a;
        std::cout << "You are walking through the forest and a bear attacks" << std::endl;
        std::cout << "The bear has " << enemy.enemy_Health(a) << "hp" << std::endl;
        std::cout << "What will you do?" << std::endl;
        std::cout << "[1]Throw Spear  " << "[2]Savage Roar  " << "[3]Transform  " << "[4]Run Away" << std::endl;
        int player_Choice;
        std::cin >> player_Choice;

        switch (player_Choice) {
        case 1:
            a = druid_Abilities.spearThrow();
            std::cout << "You attack with a spear and deal: " << a << std::endl;
            std::cout << "The bears health is now " << enemy.enemy_Health(a) << std::endl;
        case 2:

        case 3:

        case 4:
        }
       
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
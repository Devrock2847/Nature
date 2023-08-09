#include "Druid_Abilities.h"
#include "Enemy.h"
#include <iostream>

int runGame() {
    Druid_Abilities druid_Abilities;
    Enemy enemy;
    bool trigger_Bool = true;
    int a = 0;
    int b = 200;
    std::cout << "You are walking through the forest and a bear attacks" << std::endl;
    while (trigger_Bool) {
        std::cout << "The bear has " << b << "hp" << std::endl;
        std::cout << "[1]Throw Spear  " << "[2]Savage Roar  " << "[3]Transform  " << "[4]Run Away" << std::endl;
        int player_Choice;
        std::cin >> player_Choice;
        switch (player_Choice) {
        case 1:
            a = druid_Abilities.spearThrow();
            b = enemy.enemy_Health(a, b);
            std::cout << "You attack with a spear and deal: " << a << std::endl;
            if (b <= 0) {
                std::cout << "You have defeated the bear!" << std::endl;
                trigger_Bool = false;
                break;
            }
            break;
        case 2:
            a = druid_Abilities.savageRoar();
            b = enemy.enemy_Health(a, b);
            std::cout << "You attack with a terrifying roar and deal: " << a << std::endl;
            if (b <= 0) {
                std::cout << "You have defeated the bear!" << std::endl;
                trigger_Bool = false;
                break;
            }
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    return 0;
}

int main() {
    std::cout << "Welcome to Nature!" << std::endl;
    runGame();
    return 0;
}
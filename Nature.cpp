#include "Druid_Abilities_Human.h"
#include "Druid_Abilities_Transform.h"
#include "Enemy.h"
#include <iostream>

int runGame() {
    Druid_Abilities_Human druid_Abilities_Human;
    Druid_Abilities_Transform druid_Abilities_Transform;
    bool trigger_Bool = true;
    bool transform_Bool = false;
    int attack_Var = 0;
    bool isTrue = true;

    std::cout << "" << std::endl;

    for (int i = 1; i <= 2; i++) {
        trigger_Bool = true;
        Enemy enemy(i);

        while (trigger_Bool) {
            std::cout << "The " << enemy.get_Enemy_Type() << " has " << enemy.enemy_HP << "hp" << std::endl;
            if (transform_Bool == false) {
                std::cout << "----------------------------------------------------------" << "\n";
                std::cout << "[1]Throw Spear  " << "[2]Savage Roar  " << "[3]Transform  " << "[4]Run Away" << "\n";
                std::cout << "----------------------------------------------------------" << std::endl;
            }
            else if (transform_Bool == true) {
                std::cout << "----------------------------------------------------------" << "\n";
                std::cout << "[1]Viscous Bite  " << "[2]Devastating Swipe  " << "[3]Transform  " << "[4]Run Away" << "\n";
                std::cout << "----------------------------------------------------------" << std::endl;
            }
            int player_Choice;
            std::cin >> player_Choice;
            switch (player_Choice) {
            case 1:
                if (transform_Bool == false) {
                    attack_Var = druid_Abilities_Human.spearThrow();
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "You attack with a spear and deal: " << attack_Var << " damage" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                else if (transform_Bool == true) {
                    attack_Var = druid_Abilities_Transform.bite();
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "You charge and viscously bite and deal: " << attack_Var << " damage" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                enemy.enemy_HP = enemy.enemy_Health(attack_Var, enemy.enemy_HP);
                if (enemy.enemy_HP <= 0) {
                    std::cout << "The " << "Bear" << " is slain, you are victorious!" << std::endl;
                    trigger_Bool = false;
                    break;
                }
                //enemy attacks
                break;
            case 2:
                if (transform_Bool == false) {
                    attack_Var = druid_Abilities_Human.savageRoar();
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "You attack with a terrifying roar and deal: " << attack_Var << " damage" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                else if (transform_Bool == true) {
                    attack_Var = druid_Abilities_Transform.swipe();
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "You attack with a devastating swipe and deal: " << attack_Var << " damage" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                enemy.enemy_HP = enemy.enemy_Health(attack_Var, enemy.enemy_HP);
                if (enemy.enemy_HP <= 0) {
                    std::cout << "You have defeated the " << enemy.get_Enemy_Type() << "!" << std::endl;
                    trigger_Bool = false;
                    break;
                }
                //enemy attacks
                break;
            case 3:
                if (transform_Bool == true) {
                    transform_Bool = false;
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "You begin to shrink, and return to your human form" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                else if (transform_Bool == false) {
                    transform_Bool = true;
                    std::cout << "----------------------------------------------------------" << "\n";
                    std::cout << "Your eyes turn red and your arms swell as you transform into a bear" << "\n";
                    std::cout << "----------------------------------------------------------" << std::endl;
                }
                //enemy attacks
                break;
            case 4:
                std::cout << "There is no escape, you must fight!" << std::endl;
                break;
            default:
                break;
            }
        }
    }
    return 0;
}

int main() {
    std::cout << "**********************************************************" << "\n";
    std::cout << "   __" << "\n";
    std::cout << "  {OO}" << "\n";
    std::cout << "  |__/                        ^" << "\n";
    std::cout << "  |^|   Welcome to Nature!   / |" << "\n";
    std::cout << "  | |_______________________/ /" << "\n";
    std::cout << "  {_________________________ /" << "\n";
    std::cout << "**********************************************************" << std::endl;
    runGame();
    return 0;
}
#include "Druid_Abilities_Human.h"
#include "Druid_Abilities_Transform.h"
#include "Enemy.h"
#include <iostream>

void wolfAttacks() {
    std::cout << "You are sneaking past a cave and hear a wolf growl" << std::endl;
    std::cout << "Suddenly 3 wolves appear and have you surrounded" << std::endl;
    std::cout << "    +   +    +   +    +   +" << "\n";
    std::cout << "   + + + +  + + + +  + + + +" << "\n";
    std::cout << "  {  @ @___{  @ @___{  @ @___" << "\n";
    std::cout << "  {    vvvv{    vvvv{    vvvv" << "\n";
    std::cout << "   {   ^^^^ {   ^^^^ {   ^^^^" << "\n";
    std::cout << "     ¬¬¬¬¬¬    ¬¬¬¬¬    ¬¬¬¬¬" << std::endl;
}
void bearAttacks() {
    std::cout << "You are walking through the forest and a bear attacks" << std::endl;
    std::cout << "    +     + " << "\n";
    std::cout << "   + +   + +" << "\n";
    std::cout << "  + ^ + + ^ +" << "\n";
    std::cout << " {           }" << "\n";
    std::cout << "{   @     @   }" << "\n";
    std::cout << "{    |   |    }   " << "\n";
    std::cout << "{    (oYo)    }" << "\n";
    std::cout << " {    vvv    } " << "\n";
    std::cout << "  ~~~ ^^^ ~~~" << "\n";
    std::cout << "      ~~~" << std::endl;
}

int runGame() {
    Druid_Abilities_Human druid_Abilities_Human;
    Druid_Abilities_Transform druid_Abilities_Transform;
    bool trigger_Bool = true;
    bool transform_Bool = false;
    int attack_Var = 0;
    bool isTrue = true;
    int headsOrTails;
    headsOrTails = rand() % 2;
    if (headsOrTails == 1) {
        bearAttacks();
    } 
    else {
        wolfAttacks(); 
    }
    Enemy enemyBear(1);
    
    

    while (isTrue) {
        while (trigger_Bool) {
            std::cout << "The bear has " << enemyBear.enemy_HP  << "hp" << std::endl;
            if (transform_Bool == false) {
                std::cout << "----------------------------------------------------------" << "\n";
                std::cout << "[1]Throw Spear  " << "[2]Savage Roar  " << "[3]Transform  " << "[4]Run Away" << std::endl;
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
                enemyBear.enemy_HP = enemyBear.enemy_Health(attack_Var, enemyBear.enemy_HP);
                if (enemyBear.enemy_HP <= 0) {
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
                enemyBear.enemy_HP = enemyBear.enemy_Health(attack_Var, enemyBear.enemy_HP);
                if (enemyBear.enemy_HP <= 0) {
                    std::cout << "You have defeated the bear!" << std::endl;
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
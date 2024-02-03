#include "Druid_Abilities.h"
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
    Druid_Abilities druid_Abilities;
    bool trigger_Bool = true;
    int attack_Var = 0;
    //int enemy_HP = 200;
    bool isTrue = true;
    int headsOrTails;
    headsOrTails = rand() % 2 + 1;
    if (headsOrTails == 1) {
        bearAttacks();
    }
    else {
        wolfAttacks(); 
    }
    


    while (isTrue) {
        Enemy enemy(200, 20, 40);
        

        while (trigger_Bool) {
            std::cout << "The bear has " << enemy.enemy_HP << "hp" << std::endl;
            std::cout << "[1]Throw Spear  " << "[2]Savage Roar  " << "[3]Transform  " << "[4]Run Away" << std::endl;
            int player_Choice;
            std::cin >> player_Choice;
            switch (player_Choice) {
            case 1:
                attack_Var = druid_Abilities.spearThrow();
                enemy.enemy_HP = enemy.enemy_Health(attack_Var, enemy.enemy_HP);
                std::cout << "You attack with a spear and deal: " << attack_Var << " damage" << std::endl;
                if (enemy.enemy_HP <= 0) {
                    std::cout << "You have defeated the bear!" << std::endl;
                    trigger_Bool = false;
                    break;
                }
                break;
            case 2:
                attack_Var = druid_Abilities.savageRoar();
                enemy.enemy_HP = enemy.enemy_Health(attack_Var, enemy.enemy_HP);
                std::cout << "You attack with a terrifying roar and deal: " << attack_Var << std::endl;
                if (enemy.enemy_HP <= 0) {
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
    }
    return 0;
}

int main() {
    std::cout << "Welcome to Nature!" << std::endl;
    runGame();
    return 0;
}
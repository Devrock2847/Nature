#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Enemy.h"
#include "Enemy_Visuals.h"

//Enemy_Visuals enemy_monsters;

Enemy::Enemy(int chapter) {
	Enemy_Visuals enemy_monsters;
	if (chapter == 1) {
		enemy_Type = "Bear";
		enemy_HP = 200;
		enemy_Regen = 20;
		enemy_Attack_Power = 40;
		enemy_monsters.bear_Attacks();
	}
	else if (chapter == 2) {
		enemy_Type = "Wolf";
		enemy_HP = 75;
		enemy_Regen = 30;
		enemy_Attack_Power = 30;
	}
};
std::string Enemy::get_Enemy_Type() {
	return enemy_Type;
}
int Enemy::enemy_Health(int a, int b) {
	return b - a;
}
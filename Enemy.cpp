#pragma once
#include <iostream>
#include "Enemy.h"

int Enemy::enemy_Health(int a) {
	int enemy_Max_HP = 200;
	int enemy_current_HP = enemy_Max_HP - a;
	return enemy_current_HP;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
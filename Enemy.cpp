#pragma once
#include <iostream>
#include "Enemy.h"
int enemy_HP;
int Enemy::enemy_Health(int a) {
	int enemy_Max_HP = 200;
	int enemy_HP = enemy_HP - a;
	return enemy_HP;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
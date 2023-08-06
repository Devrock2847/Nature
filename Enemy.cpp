#pragma once
#include <iostream>
#include "Enemy.h"

int Enemy::enemy_Health() {
	int enemy_HP = 200;
	return enemy_HP;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
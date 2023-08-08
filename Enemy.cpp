#pragma once
#include <iostream>
#include "Enemy.h"
int enemy_HP;
int Enemy::enemy_Health(int a, int b) {
	//int enemy_Max_HP = 200;
	//int enemy_HP = b - a;
	return b - a;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
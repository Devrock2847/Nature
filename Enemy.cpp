#pragma once
#include <iostream>
#include "Enemy.h"
int Enemy::enemy_Health(int a, int b) {
	return b - a;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
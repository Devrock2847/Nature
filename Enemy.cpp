#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Enemy.h"

Enemy::Enemy {
	int enemy_HP;
	int enemy_attack_power;
	int enemy_regen;
};

std::string enemy_Type(int a) {
	std::vector<std::string> bear_Name = { "Bear", "Wolf" };
	return bear_Name[a];
};

int Enemy::enemy_Health(int a, int b) {
	return b - a;
};

int Enemy::enemy_AttackPWR() {
	return 20;
};

int Enemy::regen_Rate() {
	return 10;
}
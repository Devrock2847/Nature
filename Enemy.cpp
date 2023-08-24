#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Enemy.h"

Enemy::Enemy(int health, int attack_power, int regen) {
	//health = enemy_Health(health, 0);

}
std::string enemy_Type(int a) {
	std::vector<std::string> bear_Name = { "Bear", "Wolf"};
	return bear_Name[a];
}
int Enemy::enemy_Health(int a, int b) {
	return b - a;
}
int Enemy::enemy_AttackPWR() {
	return 20;
}
int Enemy::regen_Rate() {
	return 10;
}
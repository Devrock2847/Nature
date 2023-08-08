#pragma once
#include <iostream>

class Enemy {
public:
	int enemy_HP = 200;
	int enemy_Health(int a, int enemy_HP);
	int enemy_AttackPWR();
	int regen_Rate();
};
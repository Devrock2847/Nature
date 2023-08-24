#pragma once
#include <iostream>

class Enemy {
public:
	struct {
		int enemy_HP;
		int regen_Rate;
		int attack_Power;
	};
	std::string enemy_Type(int a);
	int enemy_Health(int a, int b);
	int enemy_AttackPWR();
	int regen_Rate();
};
#pragma once
#include <iostream>

class Enemy {
public:
	std::vector<std::string> enemy_Type(int a);
	int enemy_Health(int a, int b);
	int enemy_AttackPWR();
	int regen_Rate();
};
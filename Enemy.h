#pragma once
#include <iostream>
#include <string>

class Enemy {
public:
	struct {
		std::string enemy_Type;
		int enemy_HP;
		int enemy_Regen;
		int enemy_Attack_Power;
	};
	Enemy(int chapter);
	std::string get_Enemy_Type();
	int enemy_Health(int a, int b);
};
#pragma once
#include <iostream>

class Enemy {
public:
	struct {
		std::string enemy_Type;
		int enemy_HP;
		int enemy_Regen;
		int enemy_Attack_Power;
	};
	Enemy(int chapter) {
		if (chapter == 1) {
			enemy_Type = "Bear";
			enemy_HP = 200;
			enemy_Regen = 20;
			enemy_Attack_Power = 40;
		}
		else if (chapter == 2) {
			enemy_Type = "Wolf";
			enemy_HP = 75;
			enemy_Regen = 30;
			enemy_Attack_Power = 30;
		}
	};
	std::string enemy_Type(int a);
	int enemy_Health(int a, int b);
	int enemy_AttackPWR();
	int regen_Rate();
};
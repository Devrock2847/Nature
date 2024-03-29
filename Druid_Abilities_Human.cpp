#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include "Druid_Abilities_Human.h"

int Druid_Abilities_Human::transform() {
	int transform_Damage = 0;
	return transform_Damage;
};

int Druid_Abilities_Human::savageRoar() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> roar_Damage(10, 20);
	return roar_Damage(generator);
};

int Druid_Abilities_Human::spearThrow() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> spear_Damage(20, 50);
	return spear_Damage(generator);
};
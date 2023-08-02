#include <iostream>
#include <vector>
#include <chrono>
#include "Druid_Abilities.h"

int Druid_Abilities::transform() {
	int transform_Damage = 0;
	return transform_Damage;
};

int Druid_Abilities::savageRoar() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

	std::default_random_engine generator(seed);
	//std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(4, 6);
	int roar_Damage = distribution(generator);
	return roar_Damage;
};

int Druid_Abilities::spearThrow() {
	int spear_Damage = 12;
	return spear_Damage;
};
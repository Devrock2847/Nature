#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include "Barbarian_Abilities.h"

int Barbarian_Abilities::heroic_Smash() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> smash_Damage(25, 40);
	return smash_Damage(generator);
}

int Barbarian_Abilities::thunder_Cleave() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> cleave_Damage(10, 20);
	return cleave_Damage(generator);
}

int Barbarian_Abilities::enrage() {
	//attack power increases 
	//regen rate increases 
	return 0;
}
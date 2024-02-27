#include <iostream>
#include <vector>
#include <chrono>
#include <random>

int Druid_Abilities_Transform::transform() {
	int transform_Damage = 0;
	return transform_Damage;
}
int Druid_Abilities_Transform::swipe() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> swipe_Damage(10, 20);
	return swipe_Damage(generator);
}
int Druid_Abilities_Trasform::bite() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::uniform_int_distribution<int> bite_Damage(30, 40);
	return bite_Damage(generator);
}
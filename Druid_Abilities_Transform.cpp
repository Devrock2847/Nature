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
	std::uniform_int_distribution<int> roar_Damage(10, 20);
	return roar_Damage(generator);
	int swipe_Damage = 10;
	return swipe_Damage;
}
int Druid_Abilities_Trasform::bite() {
	int bite_Damage = 40;
	return
}
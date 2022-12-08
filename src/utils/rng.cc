#include "rng.h"
#include <random>

RNG::RNG() : random_device_(std::random_device{}){};  

unsigned int RNG::generate(unsigned int min, unsigned int max) {
	std::mt19937 rng{ random_device_() };
	std::uniform_int_distribution<unsigned int> uni{min, max};
	auto result{ uni(rng) };
	return result;
}

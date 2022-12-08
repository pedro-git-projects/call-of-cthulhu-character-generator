#include "d100.h"
#include "rng.h"

D100::D100() : numberOfSides{100} {} 

unsigned int D100::roll() const {
	RNG rng{};	
	auto result = rng.generate(1, numberOfSides);
	return result;
}

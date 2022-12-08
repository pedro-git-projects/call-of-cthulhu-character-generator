#include "d4.h"
#include "rng.h"

D4::D4() : numberOfSides{4} {} 

unsigned int D4::roll() const {
	RNG rng{};	
	auto result = rng.generate(1, numberOfSides);
	return result;
}

#include "d10.h"
#include "rng.h"

D10::D10() : numberOfSides{10} {} 

unsigned int D10::roll() const {
	RNG rng{};	
	auto result = rng.generate(1, numberOfSides);
	return result;
}

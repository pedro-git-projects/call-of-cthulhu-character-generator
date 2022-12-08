#include <utils/d6.h>
#include <rng.h>

D6::D6() : numberOfSides{6} {} 

unsigned int D6::roll() const {
	RNG rng{};	
	auto result = rng.generate(1, numberOfSides);
	return result;
}

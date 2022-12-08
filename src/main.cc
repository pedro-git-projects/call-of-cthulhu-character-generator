#include "rng.h"
#include <iostream>

int main() {
	RNG rng{};
	auto result  = rng.generate(1, 6);
	std::cout << result << std::endl; 

}

#include "d100_factory.h"
#include "d4_factory.h"
#include "d6_factory.h"
#include "dice_roller.h"
#include <iostream>
#include <ostream>

int main() {
	D4Factory d4_factory{};
	D6Factory d6_factory{};
	D100Factory d100_factory{};

	DiceRoller roller{};

	auto result_d4 = roller.roll_dice(d4_factory);
	auto result_d6 = roller.roll_dice(d6_factory);
	auto result_d100 = roller.roll_dice(d100_factory);

	std::cout << result_d4 << std::endl;
	std::cout << result_d6 << std::endl;
	std::cout << result_d100 << std::endl;
}

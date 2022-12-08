#include "d4_factory.h"
#include "dice_roller.h"
#include <iostream>
#include <ostream>

int main() {
	D4Factory d4_factory{};
	DiceRoller roller{};
	auto result = roller.roll_dice(d4_factory);
	std::cout << result << std::endl;
}

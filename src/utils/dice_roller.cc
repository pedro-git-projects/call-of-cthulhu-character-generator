#include "dice_roller.h"

unsigned int DiceRoller::roll_dice(const DiceFactory &factory) const {
	auto result { factory.roll() };
	return result;
}

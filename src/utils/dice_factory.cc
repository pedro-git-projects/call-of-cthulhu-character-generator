#include "dice.h"
#include <utils/dice_factory.h>

unsigned int DiceFactory::roll() const {
	Dice* d = create();
	unsigned int result { d->roll() };
	return result;
}

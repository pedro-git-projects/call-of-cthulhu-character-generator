#ifndef CTHULLU_HEADERS_UTILS_DICE_ROLLER_H_
#define CTHULLU_HEADERS_UTILS_DICE_ROLLER_H_ 

#include "dice_factory.h"

class DiceRoller {
	public:
		unsigned int roll_dice(const DiceFactory& factory) const;
};

#endif


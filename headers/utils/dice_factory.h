#ifndef CTHULLU_HEADERS_UTILS_DICE_FACTORY_H_
#define CTHULLU_HEADERS_UTILS_DICE_FACTORY_H_

#include "dice.h"

class DiceFactory {
	public:
		virtual Dice* create() const = 0;
	protected:
		virtual ~DiceFactory() = 0;
};

#endif


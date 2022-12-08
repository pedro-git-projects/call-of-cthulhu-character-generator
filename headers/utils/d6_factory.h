#ifndef CTHULLU_HEADERS_UTILS_D6_FACTORY_H_
#define CTHULLU_HEADERS_UTILS_D6_FACTORY_H_

#include "dice.h"
#include "dice_factory.h"

struct D6Factory : public DiceFactory {
	Dice* create() const override;
};

#endif

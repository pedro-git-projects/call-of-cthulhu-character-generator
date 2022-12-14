#ifndef CTHULLU_HEADERS_UTILS_D10_FACTORY_H_
#define CTHULLU_HEADERS_UTILS_D10_FACTORY_H_

#include "dice.h"
#include "dice_factory.h"

struct D10Factory : public DiceFactory {
	Dice* create() const override;
};

#endif

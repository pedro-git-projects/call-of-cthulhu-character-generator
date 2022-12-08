#ifndef CTHULLU_HEADERS_UTILS_D100_FACTORY_H_
#define CTHULLU_HEADERS_UTILS_D100_FACTORY_H_

#include "dice.h"
#include "dice_factory.h"

struct D100Factory : public DiceFactory {
	Dice* create() const override;
};

#endif

#include "d10.h"
#include "dice.h"
#include "d10_factory.h"

Dice* D10Factory::create() const {
	return new D10{};
}

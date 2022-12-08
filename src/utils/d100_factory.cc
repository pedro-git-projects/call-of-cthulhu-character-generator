#include "d100.h"
#include "dice.h"
#include "d100_factory.h"

Dice* D100Factory::create() const {
	return new D100{};
}

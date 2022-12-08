#include "d6.h"
#include "dice.h"
#include "d6_factory.h"

Dice* D6Factory::create() const {
	return new D6{};
}

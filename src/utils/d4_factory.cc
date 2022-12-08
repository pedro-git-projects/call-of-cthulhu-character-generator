#include "d4.h"
#include "dice.h"
#include <utils/d4_factory.h>

Dice* D4Factory::create() const {
	return new D4{};
}

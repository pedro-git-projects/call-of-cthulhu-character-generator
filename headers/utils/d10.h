#ifndef CTHULLU_HEADERS_UTILS_D10_H_
#define CTHULLU_HEADERS_UTILS_D10_H_

#include "dice.h"

class D10 : public virtual Dice {
	private:
		unsigned int numberOfSides;

	public:
		D10();
		unsigned int roll() const override;
};

#endif

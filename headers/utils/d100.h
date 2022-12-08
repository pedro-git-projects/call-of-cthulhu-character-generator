#ifndef CTHULLU_HEADERS_UTILS_D100_H_
#define CTHULLU_HEADERS_UTILS_D100_H_

#include "dice.h"

class D100 : public virtual Dice {
	private:
		unsigned int numberOfSides;

	public:
		D100();
		unsigned int roll() const override;
};

#endif

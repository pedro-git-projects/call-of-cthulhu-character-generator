#ifndef CTHULLU_HEADERS_UTILS_D6_H_
#define CTHULLU_HEADERS_UTILS_D6_H_

#include "dice.h"

class D6 : public virtual Dice {
	private:
		unsigned int numberOfSides;

	public:
		D6();
		unsigned int roll() const override;
};

#endif

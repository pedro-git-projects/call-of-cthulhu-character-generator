#ifndef CTHULLU_HEADERS_UTILS_D4_H_
#define CTHULLU_HEADERS_UTILS_D4_H_

#include "dice.h"

class D4 : public virtual Dice {
	private:
		unsigned int numberOfSides;

	public:
		D4();
		unsigned int roll() const override;
};

#endif

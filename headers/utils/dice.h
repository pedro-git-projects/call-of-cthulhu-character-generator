#ifndef CTHULLU_HEADERS_UTILS_DICE_H_
#define CTHULLU_HEADERS_UTILS_DICE_H_

class Dice {
	public:
		virtual unsigned int roll() const = 0;

	protected:
		Dice() = default;
		virtual ~Dice() = default;
};

#endif

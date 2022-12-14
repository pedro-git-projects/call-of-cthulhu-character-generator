#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_

#include "d6_factory.h"
#include "dice_roller.h"
#include <character.h>
#include <string>

class Investigator : public Character {
	public:
		Investigator() = default;
		Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		virtual void calculate_attributes() = 0;
	protected:
		DiceRoller roller;
		D6Factory d6_factory;
		int roll_str() const;
		int roll_con() const;
		int roll_siz() const;
		int roll_dex() const;
		int roll_app() const;
		int roll_int() const;
		int roll_pow() const;
		int roll_edu() const;
		int roll_luck() const;
};

#endif

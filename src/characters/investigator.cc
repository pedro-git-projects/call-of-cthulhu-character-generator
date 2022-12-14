#include "character.h"
#include "d100_factory.h"
#include "d10_factory.h"
#include <investigator.h>
#include <d6_factory.h>
#include <dice_roller.h>
#include <iostream>


Investigator::Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Character{name, age, residence, birthplace, occupation},
	roller{ DiceRoller{} },
	d6_factory{ D6Factory{} }, 
	d100_factory{ D100Factory{} },
	d10_factory { D10Factory{} }
	
{}

int Investigator::roll_str() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };

	auto result = (d1 + d2 + d3) * 5;

	return result;
}

int Investigator::roll_con() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };

	auto result = (d1 + d2 + d3) * 5; 

	return result;
}

int Investigator::roll_siz() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto result = (d1 + d2) * 5; 

	return result;
} 

int Investigator::roll_dex() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };
	auto result = (d1 + d2 + d3) * 5; 

	return result;
}

int Investigator::roll_app() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };
	auto result = (d1 + d2 + d3) * 5;

	return result;
}

int Investigator::roll_int() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto result = ((d1 + d2) + 6) * 5;

	return result;
}

int Investigator::roll_pow() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };

	auto result = (d1 + d2 + d3) * 5; 

	return result;
}

int Investigator::roll_edu() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };

	auto result = ((d1 + d2) + 6) * 5; 

	return result;
}

int Investigator::roll_luck() const {
	auto d1{ roller.roll_dice(d6_factory) };
	auto d2{ roller.roll_dice(d6_factory) };
	auto d3{ roller.roll_dice(d6_factory) };

	auto result = (d1 + d2 + d3) * 5; 

	return result;
}

int Investigator::improvement_check() const {
	auto result { roller.roll_dice(d100_factory) };
	return result;
}

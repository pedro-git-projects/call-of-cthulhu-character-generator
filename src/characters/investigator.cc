#include "character.h"
#include <investigator.h>


Investigator::Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Character{name, age, residence, birthplace, occupation}
{}


#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_

#include <character.h>
#include <string>

class Investigator : public Character {
	public:
		Investigator() = default;
		Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		virtual void calculate_attributes() = 0;
};

#endif

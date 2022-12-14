#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FIFTIES_H
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FIFTIES_H

#include <investigator.h>
#include <string>

class InvestigatorFifties : public Investigator {
	public:
		InvestigatorFifties() = default;
		InvestigatorFifties(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

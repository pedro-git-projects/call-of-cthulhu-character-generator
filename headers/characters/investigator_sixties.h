#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SIXTIES_H
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SIXTIES_H

#include <investigator.h>
#include <string>

class InvestigatorSixties : public Investigator {
	public:
		InvestigatorSixties() = default;
		InvestigatorSixties(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

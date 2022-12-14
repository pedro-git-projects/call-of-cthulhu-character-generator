#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SEVENTIES_H
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SEVENTIES_H

#include <investigator.h>
#include <string>

class InvestigatorSeventies : public Investigator {
	public:
		InvestigatorSeventies() = default;
		InvestigatorSeventies(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FORTIES_H
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FORTIES_H

#include <investigator.h>
#include <string>

class InvestigatorForties : public Investigator {
	public:
		InvestigatorForties() = default;
		InvestigatorForties(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

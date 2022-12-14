#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_EIGHTIES_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_EIGHTIES_H_

#include <investigator.h>
#include <string>

class InvestigatorEighties : public Investigator {
	public:
		InvestigatorEighties() = default;
		InvestigatorEighties(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

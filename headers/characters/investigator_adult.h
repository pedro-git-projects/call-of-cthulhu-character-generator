#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_ADULT_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_ADULT_H_

#include <investigator.h>
#include <string>

class InvestigatorAdult : public Investigator {
	public:
		InvestigatorAdult() = default;
		InvestigatorAdult(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

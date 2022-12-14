#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_TEEN_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_TEEN_H_

#include "investigator.h"
#include <character.h>
#include <string>

class InvestigatorTeen : public Investigator {
	public:
		InvestigatorTeen() = default;
		InvestigatorTeen(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);
		void calculate_attributes() override;
};

#endif

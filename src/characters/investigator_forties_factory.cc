#include "investigator_forties.h"
#include <investigator_forties_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorFortiesFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorForties>(name, age, residence, birthplace, occupation);
}

#include "investigator_fifties.h"
#include <investigator_fifties_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorFiftiesFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorFifties>(name, age, residence, birthplace, occupation);
}

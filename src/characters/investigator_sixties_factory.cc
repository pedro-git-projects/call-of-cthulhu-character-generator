#include "investigator_sixties.h"
#include <investigator_sixties_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorSixtiesFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorSixties>(name, age, residence, birthplace, occupation);
}

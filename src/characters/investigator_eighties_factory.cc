#include "investigator_eighties.h"
#include <investigator_eighties_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorEightiesFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorEighties>(name, age, residence, birthplace, occupation);
}

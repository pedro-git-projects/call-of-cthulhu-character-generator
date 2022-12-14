#include "investigator_adult.h"
#include <investigator_adult_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorAdultFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorAdult>(name, age, residence, birthplace, occupation);
}

#include "investigator_seventies.h"
#include <investigator_seventies_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorSeventiesFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorSeventies>(name, age, residence, birthplace, occupation);
}

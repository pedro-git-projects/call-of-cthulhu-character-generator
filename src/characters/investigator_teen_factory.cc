#include "investigator_teen.h"
#include <investigator_teen_factory.h>
#include <memory>

std::unique_ptr<Investigator> InvestigatorTeenFactory::create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const {
	return std::make_unique<InvestigatorTeen>(name, age, residence, birthplace, occupation);
}

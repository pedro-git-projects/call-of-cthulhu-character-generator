#include "investigator.h"
#include "investigator_adult_factory.h"
#include "investigator_eighties_factory.h"
#include "investigator_fifties_factory.h"
#include "investigator_forties_factory.h"
#include "investigator_seventies_factory.h"
#include "investigator_sixties_factory.h"
#include "investigator_teen_factory.h"
#include <concrete_investigator_factory.h>
#include <memory>
#include <stdexcept>


ConcreteInvestigatorFactory::ConcreteInvestigatorFactory() {
	investigator_factories_["teen"] = std::make_unique<InvestigatorTeenFactory>();
	investigator_factories_["adult"] = std::make_unique<InvestigatorAdultFactory>();
	investigator_factories_["forties"] = std::make_unique<InvestigatorFortiesFactory>();
	investigator_factories_["fifties"] = std::make_unique<InvestigatorFiftiesFactory>();
	investigator_factories_["sixties"] = std::make_unique<InvestigatorSixtiesFactory>();
	investigator_factories_["seventies"] = std::make_unique<InvestigatorSeventiesFactory>();
	investigator_factories_["eighties"] = std::make_unique<InvestigatorEightiesFactory>();
};

std::unique_ptr<Investigator> ConcreteInvestigatorFactory::create_investigator_or_die(const std::string& type, std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) {
	if(investigator_factories_.count(type)) {
		auto investigator { investigator_factories_[type]->create(name, age, residence, birthplace, occupation)};
		investigator->calculate_attributes();
		return investigator;
	} else {
		throw new std::runtime_error("unknown type " + type);
		return nullptr;
	}
}

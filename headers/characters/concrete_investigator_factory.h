#ifndef CTHULLU_HEADERS_CHARACTERS_CONCRETE_INVESTIGATOR_FACTORY_H_
#define CTHULLU_HEADERS_CHARACTERS_CONCRETE_INVESTIGATOR_FACTORY_H_

#include "investigator.h"
#include <investigator_factory.h>
#include <map>
#include <memory>

class ConcreteInvestigatorFactory {
	public:
		ConcreteInvestigatorFactory();
		std::unique_ptr<Investigator> create_investigator_or_die(const std::string& type, std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);	
	private:
		std::map<std::string, std::unique_ptr<InvestigatorFactory>> investigator_factories_;
};

#endif

#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FIFTIES_FACTORY_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FIFTIES_FACTORY_H_

#include <investigator_factory.h>
#include <string>
#include <memory>

class InvestigatorFiftiesFactory : public InvestigatorFactory {
	public:
		std::unique_ptr<Investigator> create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const override;	
};

#endif
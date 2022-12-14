#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SIXTIES_FACTORY_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_SIXTIES_FACTORY_H_

#include <investigator_factory.h>
#include <string>
#include <memory>

class InvestigatorSixtiesFactory : public InvestigatorFactory {
	public:
		std::unique_ptr<Investigator> create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const override;	
};

#endif

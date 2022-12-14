#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FACTORY_H
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_FACTORY_H

#include <investigator.h>
#include <memory>

class InvestigatorFactory {
	public:
		virtual std::unique_ptr<Investigator> create(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) const = 0;
};

#endif

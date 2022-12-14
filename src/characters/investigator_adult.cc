#include <investigator_adult.h>
#include <investigator.h>
#include <iostream>

InvestigatorAdult::InvestigatorAdult(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Investigator{name, age, residence, birthplace, occupation}
{}


void InvestigatorAdult::calculate_attributes() {
	std::cout << "Created adult investigator";
};

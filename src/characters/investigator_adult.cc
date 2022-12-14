#include <investigator_adult.h>
#include <investigator.h>
#include <iostream>

InvestigatorAdult::InvestigatorAdult(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Investigator{name, age, residence, birthplace, occupation}
{}


void InvestigatorAdult::calculate_attributes() {
	std::cout << "App " << roll_app() << std::endl;
	std::cout << "Int " << roll_int() << std::endl;
	std::cout << "Dex" << roll_dex() << std::endl;
};

#include <character.h>
#include <investigator.h>
#include <investigator_teen.h>
#include <iostream>

InvestigatorTeen::InvestigatorTeen(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Investigator{name, age, residence, birthplace, occupation}
{}


void InvestigatorTeen::calculate_attributes() {
	std::cout << "test";
};


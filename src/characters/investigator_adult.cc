#include <investigator_adult.h>
#include <investigator.h>
#include <iostream>

InvestigatorAdult::InvestigatorAdult(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	Investigator{name, age, residence, birthplace, occupation}
{}


void InvestigatorAdult::calculate_attributes() {
	str_ = roll_str();
	con_ = roll_con();
	intel_ = roll_int();
	pow_ = roll_pow();
	siz_ = roll_siz();
	dex_ = roll_dex();
	app_ = roll_app();
	edu_ = roll_edu();
	luck_ = roll_luck();
	std::cout << "Current Edu: " << edu_ << std::endl; 

	/* Edu improvement check */
	int check = improvement_check(); 
	if(check > edu_) {
		auto improvement = roller.roll_dice(d10_factory);
		edu_ += improvement;
		std::cout << "Edu improved by " << improvement << std::endl; 
	}
	std::cout << "Final Edu: " << edu_ << std::endl;
};

#include <investigator.h>


Investigator::Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	name_{ name },
	age_{ age },
	residence_{ residence },
	birthplace_{ birthplace },
	occupation_{ occupation }
{}

void Investigator::calculate_attributes() {
}

std::string Investigator::name() const {
	return name_;
}

unsigned int Investigator::age() const {
	return age_;
}

std::string Investigator::residence() const {
	return residence_;
}

std::string Investigator::birthplace() const {
	return birthplace_;
}

std::string Investigator::occupation() const {
	return occupation_;
}

int Investigator::str() const {
	return str_;
}

int Investigator::con() const {
	return con_;
}

int Investigator::pow() const {
	return pow_;
}

int Investigator::dex() const {
	return dex_;
}

int Investigator::app() const {
	return app_;
}

int Investigator::siz() const {
	return siz_;
}

int Investigator::intel() const {
	return intel_;
}

int Investigator::edu() const {
	return edu_;
}

int Investigator::luck() const {
	return luck_;
}

int Investigator::mp() const {
	return mp_;
}

int Investigator::db() const {
	return db_;
}

int Investigator::build() const {
	return build_;
}

int Investigator::hp() const {
	return hp_;
}

int Investigator::san() const {
	return san_;
}

int Investigator::mv() const {
	return mv_;
}


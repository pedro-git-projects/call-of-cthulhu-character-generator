#include <character.h>
Character::Character(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation) : 
	name_{ name },
	age_{ age },
	residence_{ residence },
	birthplace_{ birthplace },
	occupation_{ occupation }
{}

std::string Character::name() const {
	return name_;
}

unsigned int Character::age() const {
	return age_;
}

std::string Character::residence() const {
	return residence_;
}

std::string Character::birthplace() const {
	return birthplace_;
}

std::string Character::occupation() const {
	return occupation_;
}

int Character::str() const {
	return str_;
}

int Character::con() const {
	return con_;
}

int Character::pow() const {
	return pow_;
}

int Character::dex() const {
	return dex_;
}

int Character::app() const {
	return app_;
}

int Character::siz() const {
	return siz_;
}

int Character::intel() const {
	return intel_;
}

int Character::edu() const {
	return edu_;
}

int Character::luck() const {
	return luck_;
}

int Character::mp() const {
	return mp_;
}

int Character::db() const {
	return db_;
}

int Character::build() const {
	return build_;
}

int Character::hp() const {
	return hp_;
}

int Character::san() const {
	return san_;
}

int Character::mv() const {
	return mv_;
}


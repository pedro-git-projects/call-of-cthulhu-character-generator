#ifndef CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_
#define CTHULLU_HEADERS_CHARACTERS_INVESTIGATOR_H_

#include <string>

class Investigator {
	public:
		Investigator() = default;
		Investigator(std::string name, unsigned int age, std::string residence, std::string birthplace, std::string occupation);

		std::string name() const;
		unsigned int age() const;
		std::string residence() const;
		std::string birthplace() const;
		std::string occupation() const;
		int str() const;
		int con() const;
		int pow() const;
		int dex() const;
		int app() const;
		int siz() const;
		int intel() const;
		int edu() const;
		int luck() const;
		int mp() const;
		int db() const;
		int build() const;
		int hp() const;
		int san() const;
		int mv() const;
		void calculate_attributes();

	private:
		std::string name_;
		unsigned int age_;
		std::string residence_;
		std::string birthplace_;
		std::string occupation_;
		int str_;
		int con_;
		int pow_;
		int dex_;
		int app_;
		int siz_;
		int intel_;
		int edu_;
		int luck_;
		int mp_;
		int db_;
		int build_;
		int hp_;
		int san_;
		int mv_;
};

#endif

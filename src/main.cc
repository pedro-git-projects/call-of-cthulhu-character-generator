#include <concrete_investigator_factory.h>
#include <iostream>

int main() {
	ConcreteInvestigatorFactory f{};
	auto i { f.create_investigator_or_die("adult", "Pedro", 24, "Brazil", "Brazil", "Brogrammer") };
}

#include <gtest/gtest.h>
#include <concrete_investigator_factory.h>

TEST(InvestigatorTest, AreFieldsPopulated) {
	ConcreteInvestigatorFactory f{};
	auto i { f.create_investigator_or_die("adult", "Pedro", 24, "Brazil", "Brazil", "Brogrammer") };

	std::string name{ i->name() }; 
	unsigned int age{ i->age() };
	std::string residence{ i->residence() }; 
	std::string birth{ i->birthplace() }; 
	std::string occupation{ i->occupation() }; 
	std::string empty{};
	unsigned int null{};
	
	bool notEmptyStrings{ name != empty && residence != empty && birth != empty && occupation != empty };
	bool notEmptyAge{ age != null };

	EXPECT_TRUE(notEmptyStrings && notEmptyAge);
}

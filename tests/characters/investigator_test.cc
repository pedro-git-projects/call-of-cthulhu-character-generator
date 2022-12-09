#include <investigator.h>
#include <gtest/gtest.h>
#include <string.h>

TEST(InvestigatorTest, AreFieldsPopulated) {
	Investigator i {"Pedro", 21, "World", "City", "Bogrammer"};

	std::string name{ i.name() }; 
	unsigned int age{ i.age() };
	std::string residence{ i.residence() }; 
	std::string birth{ i.birthplace() }; 
	std::string occupation{ i.occupation() }; 
	std::string empty{};
	unsigned int null{};
	
	bool notEmptyStrings{ name != empty && residence != empty && birth != empty && occupation != empty };
	bool notEmptyAge{ age != null };

	EXPECT_TRUE(notEmptyStrings && notEmptyAge);
}

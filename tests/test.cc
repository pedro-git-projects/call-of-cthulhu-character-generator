#include "d4_factory.h"
#include "dice_roller.h"
#include <gtest/gtest.h>

TEST(D4Test, IsWithinBounds) {
	D4Factory d4_factory{};
	DiceRoller roller{};
	for(int i = 0; i < 10; i++) {
		auto result = roller.roll_dice(d4_factory);
		EXPECT_FALSE(result > 4 || result < 1);
	}
}

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}

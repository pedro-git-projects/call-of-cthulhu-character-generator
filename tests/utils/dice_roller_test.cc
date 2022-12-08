#include "d100_factory.h"
#include "d4_factory.h"
#include "d6_factory.h"
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

TEST(D6Test, IsWithinBounds) {
	D6Factory d6_factory{};
	DiceRoller roller{};
	for(int i = 0; i < 10; i++) {
		auto result = roller.roll_dice(d6_factory);
		EXPECT_FALSE(result > 6 || result < 1);
	}
}

TEST(D100Test, IsWithinBounds) {
	D100Factory d100_factory{};
	DiceRoller roller{};
	for(int i = 0; i < 100; i++) {
		auto result = roller.roll_dice(d100_factory);
		EXPECT_FALSE(result > 100 || result < 1);
	}
}

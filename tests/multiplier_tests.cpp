#include "gtest/gtest.h"

#include "multiplier.h"

TEST(Multipier, Multiplication) {
    auto doubler = Multiplier(2.0);

    ASSERT_EQ(doubler.multiply(2.0), 4.0);
    ASSERT_EQ(doubler.multiply(0.0), 0.0);
}

TEST(Multiplier, SmallMultiplication) {
    auto multiplier = Multiplier(1e-6);

    ASSERT_EQ(multiplier.multiply(1.0), 1e-6);
}

TEST(Multiplier, Zero) {
    auto multiplier = Multiplier(0.0);

    ASSERT_EQ(multiplier.multiply(100.0), 0.0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

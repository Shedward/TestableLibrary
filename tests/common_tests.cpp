#include "gtest/gtest.h"

TEST(Common, Common) {
    ASSERT_EQ(1, 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

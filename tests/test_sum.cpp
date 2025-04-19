#include "../include/sum.h"
#include "test_base.h"

TEST_F(BaseTest, SumTest) {
    TEST_NAME("SumTest");

    TEST_CASE("Positive numbers");
    EXPECT_EQ_TRACKED(6, sum(1, 2, 3), "1 + 2 + 3 should equal 6");

    TEST_CASE("Negative numbers");
    EXPECT_EQ_TRACKED(0, sum(-1, 2, -1), "-1 + 2 + -1 should equal 0");

    TEST_CASE("Zero as a number");
    EXPECT_EQ_TRACKED(5, sum(0, 2, 3), "0 + 2 + 3 should equal 5");
}

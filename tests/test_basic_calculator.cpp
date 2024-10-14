#include <gtest/gtest.h>
#include "basic_calculator.h"

using namespace std;

TEST(BasicCalculatorTest, Test1) {
    string input = "(1+(4+5+2)-3)+(6+8)";
    BasicCalculator bc;
    int ret = bc.calculate(input);
    std::cout << ret << std::endl;
    EXPECT_EQ(ret, 23);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
}
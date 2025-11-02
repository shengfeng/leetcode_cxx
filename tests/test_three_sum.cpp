#include <gtest/gtest.h>
#include "three_sum.h"

using namespace std;

TEST(ThreeSumTest, Test1) {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    ThreeSum ts;
    vector<vector<int>> ret = ts.threeSum(nums);
    vector<vector<int>> ans = {{-1, -1, 2}, {-1, 0, 1}};
    EXPECT_EQ(ret, ans);
}

TEST(ThreeSumTest, Test2) {
    vector<int> nums = {0, 1, 1};
    ThreeSum ts;
    vector<vector<int>> ret = ts.threeSum(nums);
    vector<vector<int>> ans = {};
    EXPECT_EQ(ret, ans);
}
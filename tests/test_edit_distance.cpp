#include <gtest/gtest.h>
#include "edit_distance.h"

using namespace std;

TEST(EditDistanceTest, Test1) {
    string word1 = "horse";
    string word2 = "ros";

    EditDistance ed;
    int ret = ed.minDistance(word1, word2);
    EXPECT_EQ(ret, 3);
}

TEST(EditDistanceTest, Test2) {
    string word1 = "intention";
    string word2 = "execution";

    EditDistance ed;
    int ret = ed.minDistance(word1, word2);
    EXPECT_EQ(ret, 5);
}
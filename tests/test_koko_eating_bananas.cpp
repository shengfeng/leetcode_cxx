#include <gtest/gtest.h>
#include "koko_eating_bananas.h"

using namespace std;

TEST(KoKoEatingBananasTest, Test1) {
    vector<int> input = {3, 6, 7, 11};
    KoKoEatingBananas kkeb;
    int ans = kkeb.minEatingSpeed(input, 8);
    EXPECT_EQ(ans, 4);
}

TEST(KoKoEatingBananasTest, Test2) {
    vector<int> input = {30, 11, 23, 4, 20};
    KoKoEatingBananas kkeb;
    int ans = kkeb.minEatingSpeed(input, 5);
    EXPECT_EQ(ans, 30);
}

TEST(KoKoEatingBananasTest, Test3) {
    vector<int> input = {30, 11, 23, 4, 20};
    KoKoEatingBananas kkeb;
    int ans = kkeb.minEatingSpeed(input, 6);
    EXPECT_EQ(ans, 23);
}
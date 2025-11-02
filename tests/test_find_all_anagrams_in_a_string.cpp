#include <gtest/gtest.h>
#include "find_all_anagrams_in_a_string.h"

using namespace std;

TEST(FindAllAnagramsInAStringTest, Test1) {
    string s = "cbaebabacd";
    string p = "abc";
    FindAllAnagramsInAString solution;
    vector<int> ret = solution.findAnagrams(s, p);
    vector<int> ans = {0, 6};
    EXPECT_EQ(ret, ans);
}

TEST(FindAllAnagramsInAStringTest, Test2) {
    string s = "abab";
    string p = "ab";
    FindAllAnagramsInAString solution;
    vector<int> ret = solution.findAnagrams(s, p);
    vector<int> ans = {0, 1, 2};
    EXPECT_EQ(ret, ans);
}
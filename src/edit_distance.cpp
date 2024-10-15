#include "edit_distance.h"
#include <vector>

int EditDistance::minDistance(std::string word1, std::string word2) {
    int m = word1.size();
    int n = word2.size();
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 0; i < m + 1; i++) {
        dp[i][0] = i;
    }

    for (int j = 0; j < n + 1; j++) {
        dp[0][j] = j;
    }

    for (int i = 1; i < m + 1; i ++) {
        for (int j = 1; j < n + 1; j ++) {
            if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = std::min(dp[i - 1][j], std::min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
            }
        }
    }
    return dp[m][n];
};
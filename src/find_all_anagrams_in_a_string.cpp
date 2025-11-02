#include "find_all_anagrams_in_a_string.h"

vector<int> FindAllAnagramsInAString::findAnagrams(string s, string p) {
    vector<int> ret;
    int pLength = p.size();
    int sLength = s.size();
    if (p.size() > s.size()) {
        return ret;
    }

    vector<int> pCount(26, 0);
    vector<int> sCount(26, 0);

    for (auto c: p) {
        pCount[c - 'a']++;
    }
    for (int i = 0; i < pLength; i++) {
        sCount[s[i] - 'a']++;
    }
    if (pCount == sCount) {
        ret.push_back(0);
    }
    for (int j = 1; j <= sLength - pLength; j++) {
        sCount[s[j - 1] - 'a'] --;
        sCount[s[j + pLength - 1] - 'a'] ++;

        if (pCount == sCount) {
            ret.push_back(j);
        }
    }
    return ret;
}
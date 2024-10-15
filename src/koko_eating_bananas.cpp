#include "koko_eating_bananas.h"

int KoKoEatingBananas::minEatingSpeed(std::vector<int> &piles, int h) {
    int lo = 1, hi = pow(10, 9);
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (!possible(piles, h, mid)) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return lo;
}

bool KoKoEatingBananas::possible(std::vector<int>& piles, int H, int K) {
    int time = 0;
    for (int i = 0; i < piles.size(); i++) {
        time += (piles[i] - 1) / K + 1;
    }
    return time <= H;
}
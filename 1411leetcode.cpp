#include <iostream>

class Solution {
public:
    int numOfWays(int n) {
        long long aba = 6;
        long long abc = 6;
        long long mod = 1e9 + 7;

        for (int i = 1; i < n; ++i) {
            long long next_aba = (aba * 3 + abc * 2) % mod;
            long long next_abc = (aba * 2 + abc * 2) % mod;
            aba = next_aba;
            abc = next_abc;
        }

        return (aba + abc) % mod;
    }
};
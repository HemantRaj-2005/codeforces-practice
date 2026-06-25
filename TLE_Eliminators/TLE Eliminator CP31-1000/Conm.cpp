#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int countStableSubsequences(vector<int>& nums) {
    int n = nums.size();

    // dp[lastParity][len] = count of subsequences ending with
    // lastParity (0-even, 1-odd) and length of last block = len (1 or 2).
    long long dp[2][3] = {};
    long long total = 0;

    for (int x : nums) {
        int p = x % 2;
        long long newdp[2][3];
        memcpy(newdp, dp, sizeof(dp)); // start with keeping old subsequences

        // start a new subsequence with x
        newdp[p][1] = (newdp[p][1] + 1) % MOD;

        // extend existing subsequences
        for (int parity = 0; parity < 2; parity++) {
            for (int len = 1; len <= 2; len++) {
                if (dp[parity][len] == 0) continue;
                if (parity == p) {
                    if (len == 1) {
                        newdp[p][2] = (newdp[p][2] + dp[parity][len]) % MOD;
                    }
                } else {
                    newdp[p][1] = (newdp[p][1] + dp[parity][len]) % MOD;
                }
            }
        }

        memcpy(dp, newdp, sizeof(dp));
    }

    long long ans = 0;
    for (int p = 0; p < 2; p++) {
        for (int len = 1; len <= 2; len++) {
            ans = (ans + dp[p][len]) % MOD;
        }
    }
    return ans;
}

int main(){
    vector<int> temp = {1, 3, 5};
    cout << countStableSubsequences(temp) << endl;
    temp = {2, 3, 4, 2};
    cout << countStableSubsequences(temp) << endl;
}

 
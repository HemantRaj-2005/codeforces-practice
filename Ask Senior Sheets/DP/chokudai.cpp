#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9+7;
string target = "chokudai";
vector<vector<int>> dp;

int solve(int i, int j, string &s) {

    if(j == target.size()) {
        return 1;
    }

    if(i == s.size()) {
        return 0;
    }

    if(dp[i][j] != -1) {
        return dp[i][j]%MOD;
    }

    int ans = solve(i + 1, j, s)%MOD;

    if(s[i] == target[j]) {
        ans += solve(i + 1, j + 1, s)%MOD;
    }

    return dp[i][j] = ans%MOD;
}

signed main() {

    string s;
    cin >> s;

    int n = s.size();

    dp.assign(n + 1, vector<int>(9, -1));

    cout << solve(0, 0, s)%MOD << endl;
}
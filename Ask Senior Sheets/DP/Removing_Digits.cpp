#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

vector<int> dp;

int solve(int n){
    if(n == 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    vector<int> dig;
    int temp = n;
    while(temp){
        dig.push_back(temp%10);
        temp /= 10;
    }
    int ans = INT_MAX;
    for(int i = 0; i < dig.size(); i++){
        if(dig[i] != 0)
        ans = min(ans,1+solve(n-dig[i]));
    }

    return dp[n] = ans;
}
signed main() {
    int n;
    cin >> n;
    dp = vector<int>(n+1,-1);
    cout << solve(n) << endl;
    return 0;
}
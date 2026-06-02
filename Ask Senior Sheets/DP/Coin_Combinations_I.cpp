// CSES Problem set

#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9+7;
vector<int> dp;

int solve(int sum,vector<int> &coins){
    if(sum == 0){
        return 1;
    }
    if(sum < 0){
        return 0;
    }
    if(dp[sum] != -1){
        return dp[sum]%MOD;
    }
    int n = coins.size();
    int ways = 0;
    for(int i = 0; i < n; i++){
        ways += solve(sum-coins[i],coins)%MOD;
    }

    return dp[sum] = ways%MOD;
}
signed main(){
    int n,x;
    cin >> n >> x;
    dp = vector<int> (x+1,-1);
    dp[0]=0;
    vector<int> coins(n);
    for(auto &x : coins){
        cin >> x;
    }

    cout << solve(x,coins)%MOD << endl;
    return 0;
}
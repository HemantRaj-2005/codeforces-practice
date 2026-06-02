// CSES Problem set

#include <bits/stdc++.h>
#define int long long


using namespace std;

vector<int> dp;


signed main(){
    int n,x;
    cin >> n >> x;
    dp = vector<int> (x+1,INT_MAX);
    dp[0]=0;
    vector<int> coins(n);
    for(auto &x : coins){
        cin >> x;
    }

    for(int i = 1; i <= x; i++){
        for(int &x : coins){
            if(i-x >= 0) dp[i] = min(dp[i],dp[i-x]+1);
        }
    }

    if(dp[x] == INT_MAX){
        cout << -1 << endl;
    } else{
        cout << dp[x] << endl;
    }

    return 0;
}
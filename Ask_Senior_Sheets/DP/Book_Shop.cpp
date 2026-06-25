#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

signed main(){
    int n,x;
    cin >> n >> x;
    vector<int> h(n);
    vector<int> s(n);
    for(auto &it : h){
        cin >> it;
    }
    for(auto &it : s){
        cin >> it;
    }
    vector<int> dp(x+1,0);

    for(int i = 0; i < n; i++){

        for(int money = x; money >= h[i]; money--){
            int leave = dp[money];
            int take = 0;
            if(money >= h[i]){
                take = s[i] + dp[money-h[i]]; 
            }

            dp[money] = max(take,leave);
        }
    }

    cout << dp[x] << endl;
    return 0;
}
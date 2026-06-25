#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> dp;


signed main() {
    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (auto &c : coins)
        cin >> c;
    
    vector<int> prev(x+1);
    vector<int> curr(x+1);
    prev[0] = 1;

    for(int idx = n-1; idx >= 0; idx--){
        curr[0] = 1;
        for(int sum = 1; sum <= x; sum++){
            //leave
            curr[sum] = prev[sum];

            // take
            if(sum >= coins[idx]){
                curr[sum] = (curr[sum] + curr[sum-coins[idx]])%MOD;
            }
        }
        prev = curr;
    }

    cout << prev[x] << endl;

}
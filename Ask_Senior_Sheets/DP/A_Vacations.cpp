#include <bits/stdc++.h>
#define int long long


using namespace std;

int solve(vector<int> &arr,vector<vector<int>> &dp, int last, int idx){
    int n = arr.size();
    if(idx == n){
        return 0;
    }

    if(dp[idx][last] != -1) return dp[idx][last];

    int ans = INT_MAX;

    // rest
    ans = min(ans,1+solve(arr,dp,0,idx+1));

    if(arr[idx] == 1){
        if(last != 1){
            ans = min(ans,solve(arr,dp,1,idx+1));
        }
    }
    if(arr[idx] == 2){
        if(last != 2){
            ans = min(ans,solve(arr,dp,2,idx+1));
        }
    }
    if(arr[idx] == 3){
        if(last != 1){
            ans = min(ans,solve(arr,dp,1,idx+1));
        }
        if(last != 2){
            ans = min(ans,solve(arr,dp,2,idx+1));
        }
    }

    return dp[idx][last] = ans;

}

signed main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &x : arr){
        cin >> x;
    }
    // 0 -> gym and contest closed, 1 -> gym closed, contest open, 2-> gym open contest closed, 3->gym open and contest open
    // no consecutive days same activity 0 = rest, 1 = contest, 2 = gym
    vector<vector<int>> dp(n,vector<int>(4,-1));
    int ans  = solve(arr,dp,0,0);

    cout << ans << endl;
    return 0;
}
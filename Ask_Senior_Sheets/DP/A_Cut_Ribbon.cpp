#include <bits/stdc++.h>
#define int long long


using namespace std;

vector<int> dp(4001,-1);

int solve(int i, int a, int b, int c){
    if(i == 0){
        return dp[i] = 0;
    }
    if(dp[i] != -1){
        return dp[i];
    }

    int ans = INT_MIN;
    if(i-a >= 0){
        ans = max(ans,1+solve(i-a,a,b,c));
    }
    if(i-b >= 0){
        ans = max(ans,1+solve(i-b,a,b,c));
    }
    if(i-c >= 0){
        ans = max(ans,1+solve(i-c,a,b,c));
    }

    return dp[i] = ans;
}

signed main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    
    cout << solve(n,a,b,c) << endl;
    return 0;
}
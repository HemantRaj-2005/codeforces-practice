#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> dp;


signed main(){
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    dp = vector<vector<int>>(n, vector<int>(n, 0));
    dp[0][0] = 1;

    for (int j = 1; j < n; j++){
        if (grid[0][j] == '*')
            dp[0][j] = 0;
        else
            dp[0][j] = dp[0][j - 1]%MOD;
    }
    for (int i = 1; i < n; i++){
        if (grid[i][0] == '*')
            dp[i][0] = 0;
        else
            dp[i][0] = dp[i - 1][0]%MOD;
    }

    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if (grid[i][j] != '*'){
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1])%MOD;
            }
        }
    }
    if(grid[0][0] == '*' || grid[n-1][n-1] == '*'){
        dp[n - 1][n - 1] = 0;
    }

    cout << dp[n - 1][n - 1]%MOD << endl;

    return 0;
}
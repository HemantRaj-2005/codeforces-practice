#include<bits/stdc++.h>
#define int long long

using namespace std;
 
void solve(){
    int n;
    cin >> n;
    
    vector<int> ans(n);
    vector<vector<int>> mat(n,vector<int>(n-1));
    map<int,int> mpp;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            cin >> mat[i][j];
        }
    }
    
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
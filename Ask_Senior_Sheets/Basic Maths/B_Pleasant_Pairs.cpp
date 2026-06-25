#include<bits/stdc++.h>
#define int long long

using namespace std;
 
void solve(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    map<int,int> mpp;

    for(auto &x : arr) cin >> x;

    for(int i = 0; i < n; i++){
        mpp[arr[i]] = i+1;
    }
    int pairs = 0;

    for(int x = 1; x <= 2*n; x++){
        for(int y = 1; x*y <= 2*n; y++){
            int i = -1, j = -1;
            if(mpp.find(x) != mpp.end()){
                i = mpp[x];
            }
            if(mpp.find(y) != mpp.end()){
                j = mpp[y];
            }

            if(i != -1 && j != -1 && x*y == i+j){
                pairs++;
            }
        }
    }

    cout << pairs/2 << endl;
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
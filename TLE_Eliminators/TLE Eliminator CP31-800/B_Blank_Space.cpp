#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i =0 ; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    int l = 0, r = 0;
    while(r < n){
        if(a[r] == 1){
            l = r+1;
        }
        if(a[r] == 0){
            cnt = max(cnt,r-l+1);
        }
        r++;
    }
    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
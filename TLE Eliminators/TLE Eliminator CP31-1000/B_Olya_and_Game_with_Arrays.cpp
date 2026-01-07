#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> secEle;
    ll lowest = INT_MAX;

    for(int i = 0; i < n; i++){
        ll m;
        cin >> m; 
        vector<ll> arr(m);
        for(auto &x : arr){
            cin >> x;
        }

        sort(arr.begin(),arr.end());
        secEle.push_back(arr[1]);
        lowest = min(lowest,arr[0]);
    }
    sort(secEle.begin(),secEle.end());
    ll sumOfSec = accumulate(secEle.begin(),secEle.end(),0LL);
    ll lowest_sec = secEle[0];
    ll ans = sumOfSec+lowest-lowest_sec;

    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}
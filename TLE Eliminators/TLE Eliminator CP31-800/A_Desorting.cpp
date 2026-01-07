#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    bool sorted = true;
    ll maxEle = LLONG_MIN;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        maxEle = max(maxEle,a[i]);
        if(a[i] < maxEle){
            sorted = false;
        }
    }

    if(!sorted){
        cout << 0 << endl;
    }
    else {
        ll minDiff = LLONG_MAX;
        ll idx = 0;
        for(ll i = 1; i < n; i++){
            if(abs(a[i]-a[i-1]) < minDiff && a[i-1] <= a[i]){
                idx = i-1;
                minDiff = abs(a[i]-a[i-1]);
            }
        }
        cout << (minDiff / 2) + 1 << endl;
    }
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
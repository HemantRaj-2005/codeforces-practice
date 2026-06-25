#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()



void solve(){
    ll n,q; 
    cin >> n >> q;
    vector<ll> prefixSum(n+1,0);
    for(ll i=0;i<n;i++){
        ll num;
        cin >> num;
        prefixSum[i+1] = prefixSum[i] + num;
    }

    while(q--){
        ll l,r,k;
        cin >> l >> r >> k;
        ll sum = 0;
        sum = prefixSum[n] - (prefixSum[r] - prefixSum[l-1]) + k*(r-l+1);
        if(sum%2 == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    while(t--) solve();
    return 0;
}
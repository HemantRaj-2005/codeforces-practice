#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll ans = LLONG_MAX;
    ll evens = 0;
    for(ll i = 0; i < n; i++){
        if(a[i]%2 == 0){
            evens++;
        }
        if(a[i]%k == 0){
            ans = 0;
        }
        if(a[i] <= k){
            ans = min(ans,k-a[i]);
        } else{
            ans = min(ans,k - a[i]%k);
        }
    }

    if (k == 4) {
        ans =  min(ans,max(0LL, 2 - evens));
    }

    cout << ans << endl;
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
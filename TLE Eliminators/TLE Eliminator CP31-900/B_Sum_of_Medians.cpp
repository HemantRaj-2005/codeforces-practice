#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n*k);
    for(ll i=0;i<n*k;i++) cin >> a[i];
    // your logic here
    ll pointer = n*k;
    ll sum = 0;
    while(k--){
        pointer -= (n/2 + 1);
        sum += a[pointer];
    }

    cout << sum << endl;
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
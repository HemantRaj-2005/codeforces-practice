#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> p(n);
    for(ll i=0;i<n;i++) cin >> p[i];

    ll ans = p[0]-1;
    for(int i = 1; i < n; i++){
        ans = __gcd(ans,abs(p[i]-i-1));
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
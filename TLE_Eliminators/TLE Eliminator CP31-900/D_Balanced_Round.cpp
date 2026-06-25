#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    sort(all(a));
    ll l = 0, r = 1;
    ll window = 0;
    while(r < n){
        if(abs(a[r] - a[r-1]) > k){
            l = r;
        } 
        window = max(window, r-l+1);
        r++;
    }

    cout << n-window << endl;
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
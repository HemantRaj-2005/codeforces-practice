#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n,x; 
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll minimum = 0,maximum=0;

    for(ll i = 0; i < n; i++){
        maximum += a[i]/x;
        if(a[i]%x) maximum++;
        minimum += a[i];
    }

    minimum = minimum/x + (minimum%x > 0);

    cout << minimum << " " << maximum << endl;
    
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
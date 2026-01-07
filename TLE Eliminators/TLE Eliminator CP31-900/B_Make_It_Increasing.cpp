#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    bool isPossible = true;
    ll cnt = 0;
    if(n==1){
        cout << 0 << endl;
        return;
    }
    for(ll i = n-2; i >= 0; i--){
        while(a[i] >= a[i+1]){
            if(a[i] == 0) {
                isPossible = false;
                break;
            }
            a[i] /= 2;
            cnt++;
        }
        if(!isPossible){
            break;
        }
    }

    if(isPossible){
        cout << cnt << endl;
    } else{
        cout << -1 << endl;
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
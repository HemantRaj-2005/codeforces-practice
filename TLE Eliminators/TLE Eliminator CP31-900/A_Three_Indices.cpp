#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++) cin >> a[i];
    // your logic here
    bool possible = false;
    ll i = -1, k = -1, j = -1;
    for( ll m = 2; m < n; m++){
        i = -1, k = -1;
        for(ll z = 1; z < m; z++){
            if(a[z] < a[m]){
               i = z;
               break;
            }
        }

        for(ll e = m+1; e <= n; e++){
            if(a[e] < a[m]){
                k = e;
                break;
            }
        }

        if(i != -1 && k != -1){
            j = m;
            possible = true;
            break;
        }
    }

    if(!possible){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << i << " " << j << " " << k << endl;
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
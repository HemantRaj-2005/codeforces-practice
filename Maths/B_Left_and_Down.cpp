#include <bits/stdc++.h>
#define int long long

const int MOD = 1e9+7;

using namespace std;

void solve(){
    int a,b,k;
    cin >> a >> b >> k;

    int g = __gcd(a,b);

    if(max(a/g, b/g) <= k){
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
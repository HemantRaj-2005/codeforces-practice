#include <bits/stdc++.h>
#define int long long
using namespace std;

int lcm(int a, int b){
    return (a/(__gcd(a,b)))*b;
}
void solve(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(auto &x : b) cin >> x;

    int g = 0;
    int ans = 1;
    for(int i = n-1; i >= 0; i--){
        g = __gcd(g,b[i]);
        ans = lcm(ans,b[i]/g);
    }

    cout << ans << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
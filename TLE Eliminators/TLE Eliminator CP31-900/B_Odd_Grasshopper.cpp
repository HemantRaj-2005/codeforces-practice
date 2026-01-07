#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x0, n;
    cin >> x0 >> n;
    
    if (n == 0) {
        cout << x0 << endl;
        return;
    }
    
    ll displacement = 0;
    ll start;
    
    if (x0 % 2 == 0) {
        // Even starting position
        ll rem = n % 4;
        if (rem == 0) displacement = 0;
        else if (rem == 1) displacement = -n;
        else if (rem == 2) displacement = 1;
        else displacement = n + 1;
    } else {
        // Odd starting position
        ll rem = n % 4;
        if (rem == 0) displacement = 0;
        else if (rem == 1) displacement = n;
        else if (rem == 2) displacement = -1;
        else displacement = -(n + 1);
    }
    
    cout << x0 + displacement << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; 
    cin >> t;
    while(t--) solve();
    return 0;
}
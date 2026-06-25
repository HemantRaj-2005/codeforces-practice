#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,x;
    cin >> n >> k >> x;
    ll minSum = k * (k + 1) / 2;
    ll maxSum = k * (2 * n - k + 1) / 2;

    if (x >= minSum && x <= maxSum)
        cout << "YES\n";
    else
        cout << "NO\n";

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

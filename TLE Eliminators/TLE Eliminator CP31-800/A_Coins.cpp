#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    ll rem = n-k;
    if(rem%2 == 0 || n%k == 0 || n%2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
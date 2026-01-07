#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,c;
    cin >> a >> b >> c;

    if( a>b || a+c%2 > b){
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
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
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll dy = d-b;
    if(dy>=0) a = a+dy;
    ll steps = -1;
    if(dy < 0){
        cout << -1 << endl;
    }
    else if(a>= c){
        steps += dy + (a-c) + 1;
        cout << steps << endl;
    } else {
        cout << -1 << endl;
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
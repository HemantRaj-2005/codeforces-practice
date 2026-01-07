#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,n;
    cin >> a >> b >> n;
    vector<ll> x(n);
    ll time = 0;
    for(auto &t : x){
        cin >> t;
        time += min(t,a-1);
    }
    time += b;
    cout << time << endl;
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
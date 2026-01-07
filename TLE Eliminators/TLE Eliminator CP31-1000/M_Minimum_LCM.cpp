#include <bits/stdc++.h>
#define ll long long

using namespace std;


void solve(){
    ll n;
    cin >> n;
    ll a=1,b=n-1;
    for(ll i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            a = n/i;
            b = n-a;
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << a << " " << b << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
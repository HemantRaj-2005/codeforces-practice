#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(set<ll> &powof2){
    ll n; 
    cin >> n;
    
    bool hasOdd = true;

    if(powof2.find(n) != powof2.end()){
        hasOdd = false;
    }

    if(hasOdd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    set<ll> powof2;
    ll base = 1;
    for(ll i = 1; i < 64; i++){
        base *=2;
        powof2.insert(base);
    }
    while(t--) solve(powof2);
    return 0;
}
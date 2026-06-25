#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll odds = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]%2 == 1){
            odds++;
        }
    }

    if(odds%2 == 1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

}

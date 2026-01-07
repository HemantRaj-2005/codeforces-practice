#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;

    vector<vector<ll>>forces(n,vector<ll>(3));
    ll x=0,y=0,z =0;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < 3; j++){
            cin >> forces[i][j];
        }
        x += forces[i][0];
        y += forces[i][1];
        z += forces[i][2];
    }



    if( x!= 0 || y != 0 || z != 0){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
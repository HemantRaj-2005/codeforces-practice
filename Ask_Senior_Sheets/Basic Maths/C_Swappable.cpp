#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll nc2(ll n){
    return (n*(n-1))/2;
}
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll,ll> mpp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mpp[a[i]]++;
    }

    ll total = nc2(n);
    ll invalid = 0;
    for(auto x: mpp){
        invalid += nc2(x.second);
    }

    cout << total-invalid << endl;

    
    return 0;
}
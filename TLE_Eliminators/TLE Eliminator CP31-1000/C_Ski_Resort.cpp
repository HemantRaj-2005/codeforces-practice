#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> temp(n);
    for(auto &x: temp){
        cin >> x;
        if(x <= q){
            x = 1;
        }
        else{
            x = 0;
        }
    }
    ll consOnes = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){

        if(temp[i] == 1) consOnes++;
        else {
            if (consOnes >= k){
					ll diff = consOnes - k + 1;
					ans += (diff * (diff + 1)) / 2; 
				}
				consOnes = 0;
        }
    }
    if(consOnes >= k){
        ll diff = consOnes - k + 1;
        ans += (diff * (diff + 1)) / 2; 
    }

    

    cout << ans << endl;

}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}

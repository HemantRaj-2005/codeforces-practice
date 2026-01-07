#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll partitions = 0;
    int nonZeroF = INT_MAX;
    int nonZeroL = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            nonZeroF = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(a[i] != 0){
            nonZeroL = i;
            break;
        }
    }

    if(nonZeroF == INT_MAX){
        cout << 0 << endl;
        return;
    }

    if(nonZeroF == nonZeroL){
        cout << 1 << endl;
        return;
    }
    bool isZero = false;
    for(int i = nonZeroF; i <= nonZeroL; i++){
        if(a[i] == 0){
            isZero = true;
            break;
        }
    }

    if(isZero){
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    while(t--) solve();
    return 0;
}
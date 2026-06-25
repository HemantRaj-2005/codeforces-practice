#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){ 
        cin >> a[i];
        if(a[i] == 1){
            a[i]++;
        }
    }
    
    cout << a[0] << " ";
    for(int i = 1; i < n; i++){
        if(a[i]%a[i-1] == 0){
            a[i]++;
        }
        cout << a[i] << " ";
    }
    cout << endl;

    // * a[i+1]%a[i] != 0, odd even odd even, fails at condition 3,6,7,14
    
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
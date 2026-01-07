#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

template<typename T>
void print_1dvector(vector<T>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

template<typename T>
void take_1d_vector_input(vector<T> &v){
    for(auto &i : v){
        cin >> i;
    }
}

template<typename T>
T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }


void solve(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    take_1d_vector_input(a);

    ll currL = a[0]-x;
    ll currR = a[0]+x;
    ll cnt = 0;
    for(int i = 1; i < n; i++){
        ll newL = a[i]-x;
        ll newR = a[i]+x;
        currL = max(currL, newL);
        currR = min(currR, newR);
        if(currL > currR){
            cnt++;
            currL = a[i]-x;
            currR = a[i]+x;
        }
    }
    cout << cnt << endl;

}

signed main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
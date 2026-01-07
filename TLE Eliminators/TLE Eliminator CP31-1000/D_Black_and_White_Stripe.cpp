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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll l = 0, r = k-1;
    ll cntW = 0;
    for(ll i = l; i <= r; i++){
        if(s[i] == 'W') cntW++;
    }
    ll ans = cntW;

    while(r < n && l <= r){
        if(s[l] == 'W') cntW--;
        l++;
        if(r<n-1) r++;
        if(s[r] == 'W') cntW++;
        if(r-l+1==k) ans = min(ans,cntW);
    }

    cout << ans << endl;

}


signed main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
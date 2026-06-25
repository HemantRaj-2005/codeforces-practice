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


void solve(){
    ll n,k,b,s;
    cin >> n >> k >> b >> s;
    // size -> n, b = a1/k + a2/k +..+an/k, s = a1+a2+a3+..+an
    if(s < b*k || s > b*k+(k-1)*n){
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n,0);
    ans[0]=k*b;
    s-=k*b;
    for(ll i = 0; i<n; i++){
        ll add = min(s,k-1);
        ans[i]+=add;
        s-=add;
    }

    print_1dvector(ans);

}

signed main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}
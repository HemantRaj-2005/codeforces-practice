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
    ll n;
    cin >> n;

    vector<ll> shoeSz(n);
    vector<ll> permutation(n);
    
    take_1d_vector_input(shoeSz);
    for(ll i = 0; i < n; i++){
        permutation[i] = i+1;
    }
    map<ll,ll>mpp;
    for(ll i = 0; i < n; i++){
        mpp[shoeSz[i]]++;
    }
    bool flag=0;
    for(auto it: mpp){
        if(it.second == 1){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << -1 << endl;
    }
    else{

        ll l=0,r=0;

        while(r < n){
            while(r < n-1 && shoeSz[r] == shoeSz[r+1]){
                r++;
            }
            rotate(permutation.begin()+l,permutation.begin()+r,permutation.begin()+r+1);
            l=r+1;
            r++;
        }

        for(auto &x : permutation){
            cout << x << " ";
        }
        cout << endl;
    }
    
}

signed main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
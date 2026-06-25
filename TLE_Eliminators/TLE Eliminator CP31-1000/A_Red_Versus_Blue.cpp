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
    ll n,r,b;
    cin >> n >> r >> b;
    ll x;
    if(b == 1) x = r/2;
    else x = r/(b+1);
    ll rem = r%(b+1);

    while(b--){
        ll temp = x;
        while(temp--){
            cout << 'R';
            r--;
        }
        if(rem > 0){
            cout << 'R';
            rem--;
            r--;
        }

        cout << 'B';
    }
    while(r--){
        cout << 'R';
    }
    cout << endl;
}

signed main(){
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
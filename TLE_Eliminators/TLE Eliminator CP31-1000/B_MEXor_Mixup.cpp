#include <bits/stdc++.h>
#define int long long
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

vector<int> precomputeXor(3*1e5+1,0);

void precompute(){
    precomputeXor[0] = 0;
    for(int i = 1; i <= 3*1e5; i++){
        precomputeXor[i] = i^precomputeXor[i-1];
    }
}

void solve(){
    int a,b;
    cin >> a >> b;

    if(a == 0){
        cout << 1 << endl;
        return;
    }

    int xorVal = precomputeXor[a-1];

    if(xorVal == b){
        cout << a << endl;
        return;
    }
    int reqXor = xorVal^b;
    if(reqXor != a){
        cout << a+1 << endl;
        return;
    }
    else{
        cout << a+2 << endl;
        return;
    }
}

signed main(){
    fast_io;
    int t;
    cin >> t;
    precompute();
    while(t--){
        solve();
    }
}
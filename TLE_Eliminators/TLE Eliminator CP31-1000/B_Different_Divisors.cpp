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

bool isPrime(int num){
    if(num == 2) return 1;
    for(int i = 2; i*i <= num; i++){
        if(num%i == 0) return 0;
    }

    return 1;
}

void solve(){
    int d;
    cin >> d;

    int p = 0,q = 0;

    for(int i = 1+d; i<1e9; i++){
        if(isPrime(i)){
            p = i;
            break;
        }
    }
    for(int i = p+d; i<1e9; i++){
        if(isPrime(i)){
            q = i;
            break;
        }
    }

    int op1 = p*p*p;
    int op2 = p*q;

    cout << min(op1,op2) << endl;

}

signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
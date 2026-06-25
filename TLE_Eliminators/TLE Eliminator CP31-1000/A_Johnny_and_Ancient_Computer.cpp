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

int multiplyByTwo(int a, int b){
    if(b%2 == 1) return -1;
    int ops = 0;
    while(a < b){
        a = a*2;
        ops++;
    }
    if(a == b){
        return ops;
    }
    return -1;
}

int divideByTwo(int a, int b){
    int ops = 0;
    while(a > b){
        if(a%2 != 0) return -1;
        a = a/2;
        ops++;
    }
    if(a == b){
        return ops;
    }
    return -1;
}

void solve(){
    int a,b;
    cin >> a >> b;
    int twosRequired = 0;
    if(b > a){
        twosRequired = multiplyByTwo(a,b);
    } else if(b < a){
        twosRequired = divideByTwo(a,b);
    }
    int ops = twosRequired;
    if(twosRequired > 0){
        ops = twosRequired/3;
        if(twosRequired%3){
            ops++;
        }
    }

    cout << ops << endl;
}

signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
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

bool isDivisible(int num){
    int temp = num;
    while(temp > 0){
        int dig = temp%10;
        if(dig != 0 && num%dig != 0){
            return false;
        }
        temp = temp/10;
    }

    return true;
}

void solve(){
    int n; 
    cin >> n;
    for(int i = n; i < 2*1e18; i++){
        if(isDivisible(i)){
            cout << i << endl;
            return;
        }
    }
}

signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
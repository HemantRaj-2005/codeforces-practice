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


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0,r=0;
    for(int i = 0; i < n-1; i++){
        if(s[i+1] < s[i]){
            l = i,r=i+1;
            break;
        }
    }
    if((l == 0 && r == 0) || n==1){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
        cout << l+1 << " " << r+1 << endl;
    }
}

signed main(){
    fast_io;
    int t = 1;
    while(t--){
        solve();
    }
}
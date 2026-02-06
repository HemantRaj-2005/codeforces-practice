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
    string a,b;
    cin >> a >> b;

    int lcs = 0, n = a.size(), m =b.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int subSize = 0;
            int k1 = i, k2 = j;
            while(k1 < n && k2 < m && a[k1] == b[k2]){
                subSize++;
                k1++;
                k2++;
            }
            lcs = max(lcs,subSize);
        }
    }

    cout << n+m-2*lcs << endl;
}

signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
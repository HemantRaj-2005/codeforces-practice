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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    int smallest = INT_MAX;
    int sum = 0, negs = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            sum += abs(x);
            smallest = min(smallest, abs(x));
            if(x < 0) negs++;
        }
    }    
    if(negs%2 == 0){
        cout << sum << endl;
    } else{
        cout << sum - 2*smallest << endl;
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
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
    vector<pair<int,int>> cup(n);
    int leftOpens = 0, rightOpens = 0;
    for(auto &i : cup){
        cin >> i.first >> i.second;
        leftOpens += i.first;
        rightOpens += i.second;
    }

    int time = 0;
    time = min(n-leftOpens,leftOpens) + min(n-rightOpens,rightOpens);
    cout << time << endl;

}

signed main(){
    fast_io;
    int t;
    t=1;
    while(t--){
        solve();
    }
}
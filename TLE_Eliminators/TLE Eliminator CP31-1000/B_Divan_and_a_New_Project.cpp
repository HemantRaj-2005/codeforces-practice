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
    vector<int> a(n);
    take_1d_vector_input(a);
    vector<pair<int,int>> building_map;

    for(int i = 0; i < n; i++){
        building_map.pb({a[i],i});
    }
    sort(building_map.rbegin(),building_map.rend());

    vector<int> ans(n+1);
    ans[0] = 0;
    int minutes = 0;
    int coordinate = 1;
    for(int i = 0; i < n; i++){
        ans[building_map[i].second + 1] = coordinate;
        minutes += (2*abs(coordinate)*building_map[i].first);
        if(coordinate < 0){
            coordinate = abs(coordinate)+1;
        } else {
            coordinate = -coordinate;
        }                                        
    }
    cout << minutes << endl;                                              
    print_1dvector(ans);
}
signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
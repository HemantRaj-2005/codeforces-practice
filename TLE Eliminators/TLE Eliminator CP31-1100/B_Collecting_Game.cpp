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

int findIdx(vector<int> &v, int x){
    int l = 0, r = v.size() - 1;
    int ans = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(v[mid] <= x){
            ans = mid;
        }
        if(v[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return ans;
}
void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    vector<int> prefix(n+1,0);

    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + v[i-1].first;
    }
    vector<int> ans(n);
    vector<int> reach(n,0);
    reach[n-1] = n-1;
    for(int i = n-2; i >= 0; i--){
    if(prefix[i+1] >= v[i+1].first){
        reach[i] = reach[i+1];
    } else {
        reach[i] = i;
    }
}
    for(int i = 0; i < n; i++){
        ans[v[i].second] = reach[i]; 
    }
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
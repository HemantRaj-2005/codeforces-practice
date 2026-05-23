#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define int128 unsigned __int128
const int MOD = 1e9+7;

using namespace std;

template <typename T>
void takeVectorIn(vector<T> &v){
    for (auto &i : v){
        cin >> i;
    }
}

template <typename T>
T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }


void ANDSorting() {
    int n;
    cin >> n;

    vector<int> p(n);
    takeVectorIn(p);
    int ans = pow(2,31) - 1;
    // cout << "=========" << endl;
    for(int i = 0; i<n; i++){
        if(p[i] != i){
            // cout << p[i] << endl;
            ans = ans & i;
        }
    }
    // cout << "=====" << endl;
    cout << ans << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        ANDSorting();
    }
}
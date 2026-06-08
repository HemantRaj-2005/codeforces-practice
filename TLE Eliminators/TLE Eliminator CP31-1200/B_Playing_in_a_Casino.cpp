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



void PlayingCasino() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>> c(n,vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c[i][j];
        }
    }
    int ans = 0;

    for(int i = 0; i < m; i++){
        vector<int> cols(n);
        for(int j = 0; j < n; j++){
            cols[j] = c[j][i];    
        }

        sort(cols.begin(),cols.end());
        for(int i = 0; i < n; i++){
            int positive = cols[i]*i;
            int negative = cols[i]*(n-i-1);
            ans += (positive-negative);
        }
    }

    cout << ans << endl;
    
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        PlayingCasino();
    }

    return 0;
}
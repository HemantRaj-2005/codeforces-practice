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



void RemovingSmallestMultiples() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    vector<bool> vis(n+1,0);
    for(int k = 1; k <= n; k++){
        if(s[k-1] == '1'){
            continue;
        }
        for(int i = 1; i*k <= n; i++){
            if(s[i*k-1] == '1'){
                break;
            }
            if(s[i*k-1] == '0' && !vis[i*k]){
                vis[i*k] = 1;
                ans += k;
            }
        }
    }

    cout << ans << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        RemovingSmallestMultiples();
    }

    return 0;
}
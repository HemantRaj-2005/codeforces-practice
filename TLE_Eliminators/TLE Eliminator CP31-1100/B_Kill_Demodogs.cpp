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


void KillDemodogs() {
    int n;
    cin >> n;

    int a = n;
    int b = 4LL * n * n + 3LL * n - 1;

    // divide by 2
    if (a % 2 == 0)
        a /= 2;
    else
        b /= 2;

    // divide by 3
    if (a % 3 == 0)
        a /= 3;
    else
        b /= 3;

    int ans = (a % MOD) * (b % MOD) % MOD;
    ans = ans * 2022 % MOD;

    cout << ans << "\n";
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        KillDemodogs();
    }
}
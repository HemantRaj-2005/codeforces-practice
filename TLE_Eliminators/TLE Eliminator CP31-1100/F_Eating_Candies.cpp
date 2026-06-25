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


void EatingCandies() {
    int n;
    cin >> n;
    vector<int> weights(n);
    takeVectorIn(weights);
    int l = 0, r = n-1;
    int alice = 0, bob = 0;
    int ans = INT_MIN;
    while(l <= r){
        if(alice == bob){
            ans = max(ans, (n-r-1)+l);
        }
        if(alice<=bob){
            alice += weights[l];
            l++;
        } else{
            bob += weights[r];
            r--;
        }
    }
    if(alice == bob){
        ans = max(ans, (n-r-1)+l);
    }
    cout << ans << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        EatingCandies();
    }
}
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


void NegativesAndPositives() {
    int n;
    cin >> n;

    vector<int> arr(n);
    takeVectorIn(arr);

    vector<int> next(2, 0), currDP(2);

    // next = dp[n][0], dp[n][1] = 0

    for(int i = n-1; i >= 0; i--){

        for(int flipped = 0; flipped <= 1; flipped++){

            int curr = flipped ? -arr[i] : arr[i];

            int leave = curr + next[0];

            int take = LLONG_MIN;

            if(i + 1 < n){
                take = -curr + next[1];
            }

            currDP[flipped] = max(leave, take);
        }

        next = currDP;
    }

    cout << next[0] << '\n';
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        NegativesAndPositives();
    }
}
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


void GCDPartition() {
    int n;
    cin >> n;

    vector<int> arr(n);
    takeVectorIn(arr);
    int ans = 0;
    int total = accumulate(arr.begin(),arr.end(),0LL);
    int sum = 0;
    for(int i = 0; i < n-1; i++){
        sum += arr[i];
        ans = max(ans,gcd(total-sum,sum));
    }
    cout << ans << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        GCDPartition();
    }
}
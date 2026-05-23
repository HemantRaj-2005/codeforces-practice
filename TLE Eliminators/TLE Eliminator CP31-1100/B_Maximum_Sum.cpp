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

using namespace std;

template <typename T>
void takeVectorIn(vector<T> &v){
    for (auto &i : v)
    {
        cin >> i;
    }
}

void MaximumSum(){
	int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    takeVectorIn(arr);
    sort(all(arr));
    
    vector<int> pref(n + 1, 0);

    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + arr[i];

    int total = pref[n];
    int ans = 0;

    for(int x = 0; x <= k; x++){
        int remLow = pref[2*x];
        int remHigh = pref[n] - pref[n- (k-x)];
        ans = max(ans, total-remLow-remHigh);
    }

    cout << ans << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        MaximumSum();
    }
}
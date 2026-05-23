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


void CoPrime() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<vector<int>> hcf(1001,vector<int>(1001,-1));
    vector<int> lastPosition(1001,-1);
    takeVectorIn(arr);
    int ans = -1;
    int sum = 0;
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(i == j){
                hcf[i][j] = i;
            }
            if(hcf[i][j] != -1){
                continue;
            }
            hcf[i][j] = gcd(i,j);
            hcf[j][i] = hcf[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        lastPosition[arr[i]] = i+1;
    }

    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(hcf[i][j] == 1){
                if(lastPosition[i] != -1 && lastPosition[j] != -1){
                    ans = max(ans,lastPosition[i]+lastPosition[j]);
                }
            }
        }
    }

    cout << ans << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        CoPrime();
    }
}
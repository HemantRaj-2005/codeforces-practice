#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

template<typename T>
void printVector(vector<T>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

template<typename T>
void takeInput(vector<T> &v){
    for(auto &i : v){
        cin >> i;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n,0));

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++) {
            arr[i][j] = s[j] - '0';
        }
    }
    int ans = 0;
    for (int i = 0; i < n / 2; i++) {
    for (int j = i; j < n - 1 - i; j++) {
        int one = 0;

        one += arr[i][j];
        one += arr[j][n-1-i];
        one += arr[n-1-i][n-1-j];
        one += arr[n-1-j][i];

        ans += min(one, 4 - one);
    }
}

    cout << ans << endl;
}

signed main(){
    fast_io;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
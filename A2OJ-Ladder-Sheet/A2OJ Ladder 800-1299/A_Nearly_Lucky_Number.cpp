
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) ((int)(v).size())
#define F first
#define S second

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    ll num;
    cin >> num;

    int cnt = 0;
    while(num > 0){
        if(num % 10 == 4 || num % 10 == 7) cnt++;
        num /= 10;
    }

    if(cnt == 4 || cnt == 7) cout << "YES";
    else cout << "NO";
}

int main() {
    fast_io;
    solve();
    return 0;
}

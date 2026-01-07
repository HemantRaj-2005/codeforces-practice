
#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
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

bool is_prime(int n)
{
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve()
{
    int m,n;
    cin >> m >> n;

    if(!is_prime(n)){
        cout << "NO";
        return;
    }

    for(int i = m+1; i < n; i++){
        if(is_prime(i)){
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    fast_io;

    solve();
    return 0;
}

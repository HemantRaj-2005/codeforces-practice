
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

void solve()
{
    vector<vector<int>> a(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int toggles = a[i][j];

            if(i > 0) toggles += a[i - 1][j];
            if(i < 2) toggles += a[i + 1][j];
            if(j > 0) toggles += a[i][j - 1];
            if(j < 2) toggles += a[i][j + 1];

            cout << (toggles % 2 == 0 ? "1" : "0");
        }
        cout << endl;
    }
}

int main()
{
    fast_io;

    solve();

    return 0;
}

#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void TwoDtravelling(){
    int n,k,a,b;
    cin >> n >> k >> a >> b;
    vector<pair<int,int>> coordinates(n+1);
    for(int i = 1; i <= n; i++){
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    int ans;
    int distA = 1e18;
    if(a <= k && k != 0){
        distA = 0;
    } else{
        for(int i = 1; i <= k; i++){
            distA = min(distA, abs(coordinates[i].first - coordinates[a].first) + abs(coordinates[i].second - coordinates[a].second));
        }
    }
    int distB = 1e18;
    if(b <= k && k != 0){
        distB = 0;
    } else{
        for(int i = 1; i <= k; i++){
            distB = min(distB, abs(coordinates[i].first - coordinates[b].first) + abs(coordinates[i].second - coordinates[b].second));
        }
    }

    int distAB = abs(coordinates[a].first - coordinates[b].first) + abs(coordinates[a].second - coordinates[b].second);

    ans = min(distA+distB, distAB);
    cout << ans << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        TwoDtravelling();
    }
}
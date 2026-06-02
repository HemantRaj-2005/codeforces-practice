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

bool comp(pair<int,int> &a, pair<int,int> &b){
    return a.first > b.first;
}

void ThreeActivities() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    vector<pair<int,int>> c(n);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i].first = x;
        a[i].second = i;
    }
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        b[i].first = x;
        b[i].second = i;
    }
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        c[i].first = x;
        c[i].second = i;
    }

    sort(all(a),comp);
    sort(all(b),comp);
    sort(all(c),comp);

    int ans = INT_MIN;

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            for(int z = 0; z < 3; z++){
                int sum = 0;
                if(a[x].second != b[y].second && a[x].second != c[z].second && b[y].second != c[z].second){
                    sum = a[x].first + b[y].first + c[z].first;
                }
                ans = max(ans,sum);
            }
        }
    }

    cout << ans << endl;

}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        ThreeActivities();
    }
}
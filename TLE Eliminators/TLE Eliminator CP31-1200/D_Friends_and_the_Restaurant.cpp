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
    return a.second-a.first > b.second-b.first;
}

void FriendsAndTheRestaurant() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    takeVectorIn(x);
    takeVectorIn(y);
    vector<pair<int,int>> grp(n);
    for(int i = 0; i < n; i++){
        grp[i] = {x[i],y[i]};
    }
    sort(grp.begin(),grp.end(),comp);
    int diff = 0;
    vector<int> d(n);
    for(int i = 0; i < n; i++){
        d[i] = grp[i].second-grp[i].first;
        diff += d[i];
    }

    int a = 0, b = n-1;
    while(diff < 0 && b >= 0){
        diff -= d[b];
        b--;
    }

    int group = 0;
    int budgetDiff = 0;
    while(a < b && b >= 0){
        budgetDiff = d[b]+d[a];
        if(budgetDiff >= 0){
            group++;
            a++;
            b--;
        } 
        else{
            b--;
        }
    }

    cout << group << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        FriendsAndTheRestaurant();
    }

    return 0;
}
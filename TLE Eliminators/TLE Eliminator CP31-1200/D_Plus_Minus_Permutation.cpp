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

void PlusMinusPermutation() {
    int n,x,y;
    cin >> n >> x >> y;
    // means indexes divisible by x should have maximum number and with y minimum number
    int ans = 0;
    int l = 1, r = n;
    
    int lcm = (x/gcd(x,y))*y;
    int c = n/lcm;
    int a = n/x - c, b = n/y - c;

    int xsum = (a*(2*n-a+1))/2;
    int ysum = (b*(b+1))/2;
    cout << xsum-ysum << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        PlusMinusPermutation();
    }

    return 0;
}
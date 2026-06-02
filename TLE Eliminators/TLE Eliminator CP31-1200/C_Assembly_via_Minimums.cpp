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

void AssemblyViaMinimums() {
    int n;
    cin >> n;
    int m = (n*(n-1))/2;
    vector<int> a(n);
    vector<int> b(m);
    takeVectorIn(b);
    sort(all(b));
    int x = n-1, i = 0;
    while(x > 0){
        cout << b[i] << " ";
        i += x;
        x--;
    }
    cout << b[m-1] << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        AssemblyViaMinimums();
    }

    return 0;
}
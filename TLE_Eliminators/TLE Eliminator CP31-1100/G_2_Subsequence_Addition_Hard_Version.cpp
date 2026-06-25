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


void SubsequentAddition(){
	int n;
    cin >> n;
    vector<int> c(n);
    takeVectorIn(c);

    sort(all(c));
    if(c[0] != 1){
        cout << "NO" << endl;
        return;
    }
    int sum = 1;
    for(int i = 1; i < n; i++){
        if(c[i] > sum){
            cout << "NO" << endl;
            return;
        }
        sum += c[i];
    }

    cout << "YES" << endl;
    
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        SubsequentAddition();
    }
}
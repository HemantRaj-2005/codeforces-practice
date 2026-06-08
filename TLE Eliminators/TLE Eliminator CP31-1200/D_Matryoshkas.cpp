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



void Matryoshkas() {
    int n;
    cin >> n;
    vector<int>a(n);
    takeVectorIn(a);
    int ans = 0;
    map<int,int> freq;

    for(auto &x : a){
        freq[x]++;
    }

    for(auto [x,f] : freq){
        int prevFreq = 0;
        auto it = freq.find(x-1);
        if(it != freq.end()){
            prevFreq = it->second;
        }

        ans += max(0LL,f-prevFreq);
    }

    cout << ans << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        Matryoshkas();
    }

    return 0;
}
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



void ContrastValue() {
    int n;
    cin >> n;
    vector<int> a(n);
    takeVectorIn(a);
    int ans = 0;
    vector<int> b;
    b.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]){
            b.push_back(a[i]);
        }
    }

    if(b.size() == 1){
        cout << 1 << endl;
        return;
    } 

    for(int i = 1; i < b.size()-1; i++){
        if(
            (b[i] > b[i-1] && b[i] > b[i+1]) || 
            (b[i] < b[i-1] && b[i] < b[i+1])
        ){
            ans++;
        }
    }
    ans = ans+2;
    

    cout << ans << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        ContrastValue();
    }

    return 0;
}
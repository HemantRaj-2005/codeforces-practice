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


void SubtractOperation() {
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    takeVectorIn(arr);
    map<int,bool> mpp;
    bool present = false;
    for(auto &it : arr){
        mpp[it] = true;
    }
    
    for(int i = 0; i < n; i++){
        if(mpp.find(arr[i]-k) != mpp.end()){
            present = true;
            break;
        }
        mpp[arr[i]] = true;
    }
    if(present){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        SubtractOperation();
    }
}
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


void DifferenceOfGCD() {
    int n,l,r;
    cin >> n >> l >> r;

    vector<int> arr(n,-1);
    
    int i = 1;
    for(int j = l; j <= r; j++){
        if(i> n){
            break;
        }
        if(j%i == 0){
            arr[i-1] = j;
            i++;
        }
    }
    for(auto &x : arr){
        if(x == -1){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for(auto &x : arr){
        cout << x << " ";
    }
    cout << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        DifferenceOfGCD();
    }
}
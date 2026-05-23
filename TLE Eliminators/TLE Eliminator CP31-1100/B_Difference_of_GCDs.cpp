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
    while(i <= n){
        int x = ((l+i-1)/i)*i;
        if(x > r){
            break;
        } else{
            arr[i-1] = x;
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
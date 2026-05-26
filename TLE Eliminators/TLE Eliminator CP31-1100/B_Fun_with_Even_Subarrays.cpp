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


void FunWithEvenSubarrays() {
    int n;
    cin >> n;
    vector<int> arr(n);
    takeVectorIn(arr);
    //  to make all element of array equal
    // last element arr[n-1] will be copied everywhere
    int ops = 0;
    int cnt = 1;
    while(cnt < n){
        if(arr[n-cnt-1] == arr[n-1]){
            cnt++;
        } else{
            ops++;
            cnt *= 2;
        }
    }
    cout << ops << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        FunWithEvenSubarrays();
    }
}
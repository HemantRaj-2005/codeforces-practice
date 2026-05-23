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

void rotateBy90(vector<vector<int>> &arr){
    int n = arr.size();
    vector<vector<int>> temp(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[n-1-j][i] = arr[i][j];
        }
    }
    arr = temp;
}
void LiHuaAndPattern(){
	int n,k;
    cin >> n >> k;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    // * 0 for blue and 1 for red
    // question -> in k operation we can 0 <-> 1, and make 180 deg rotation
    vector<vector<int>> arr2(n,vector<int>(n));
    arr2 = arr;
    rotateBy90(arr2);
    rotateBy90(arr2);
    int ops = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != arr2[i][j]){
                ops++;
            }
        }
    }
    ops /= 2;
    
    if(ops > k){
        cout << "NO" << endl;
    } else{
    int rem = k - ops;

    if(rem % 2 == 0 || n % 2 == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        LiHuaAndPattern();
    }
}
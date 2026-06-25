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


void PaintTheArray() {
    int n;
    cin >> n;
    vector<int> arr(n);
    takeVectorIn(arr);
    int hcf1 = 0, hcf2 = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            hcf1 = gcd(hcf1,arr[i]); 
        } else{
            hcf2 = gcd(hcf2,arr[i]);
        }
    }
    bool possible1 = true;
    bool possible2 = true;
    for(int i = 0; i < n; i+=2){
        if(arr[i]%hcf2 == 0){ 
            possible1 = false; 
            break;
        }
    }
    for(int i = 1; i < n; i+=2){
        if(arr[i]%hcf1 == 0){
            possible2 = false; 
            break;
        }
    }

    
    if(possible1){
        cout << hcf2 << endl;
    } else if(possible2) {
        cout << hcf1 << endl;
    } else {
        cout << 0 << endl;
    }
    
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        PaintTheArray();
    }
}
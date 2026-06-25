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


bool check(vector<int> &arr, int x){
    int n = arr.size();
    int i = 0, j = n-1;
    while(i <= j){
        while(i<n && arr[i] == x) i++;
        while(j >= 0 && arr[j] == x) j--;
        if(i <= j && arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

void KalindromeArray() {
    int n;
    cin >> n;
    vector<int> arr(n);
    takeVectorIn(arr);
    

    bool possible = false;
    int i = 0, j = n-1;
    int x = -1, y = -1;
    while(i <= j){
        if(arr[i] != arr[j]){
            x = arr[i];
            y = arr[j];
            break;
        }
        i++; 
        j--;
    }

    if(x == -1){
        cout << "YES\n";
        return;
    }
    
    if(x!= -1 && y != -1){
        possible = check(arr,x) || check(arr,y);
    }

    if(possible){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        KalindromeArray();
    }
}
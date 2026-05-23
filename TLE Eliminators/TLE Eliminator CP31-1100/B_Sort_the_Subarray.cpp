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


void SortSubarray(){
	int n;
    cin >> n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    takeVectorIn(arr1);
    takeVectorIn(arr2);
    int leftIdx = -1, rightIdx = -1;
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            leftIdx = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(arr1[i] != arr2[i]){
            rightIdx = i;
            break;
        }
    }
    int minVal = 1e9, maxVal = -1e9;
    for(int i = leftIdx; i <= rightIdx; i++){
        minVal = min(minVal,arr1[i]);
        maxVal = max(maxVal,arr1[i]);
    }
    int i = leftIdx-1;

    while(i >= 0 && arr1[i] <= minVal){
        leftIdx = i;
        minVal = arr1[i];
        i--;
    }

    i = rightIdx+1;
    while(i < n && arr1[i] >= maxVal){
        rightIdx = i;
        maxVal = arr1[i];
        i++;
    }

    cout << leftIdx+1 << " " << rightIdx+1 << endl;
    
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        SortSubarray();
    }
}
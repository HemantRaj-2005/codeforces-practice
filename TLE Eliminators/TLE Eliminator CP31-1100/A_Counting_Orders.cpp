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

int count(int t, vector<int>&a){
    int l = 0, r = a.size()-1, n = a.size();
    while( l <= r){
        int mid = l + (r-l)/2;
        if(a[mid] < t){
            l = mid+1;
        } else{
            r = mid-1;
        }
    }

    return n-r+1;
}

void CountingOrders(){
	int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    takeVectorIn(a);
    takeVectorIn(b);
    sort(all(a));
    sort(rall(b));

    int result = 1;
    
    for(int i = 0; i < n; i++){
        int temp = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        int count = a.size() - temp;

        result = result * max(count-i,0LL)%MOD;
    }

    cout << result << endl;
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        CountingOrders();
    }
}
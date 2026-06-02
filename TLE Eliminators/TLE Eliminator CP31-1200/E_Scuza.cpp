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



void Scuza() {
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> query(q);
    takeVectorIn(a);
    takeVectorIn(query);
    
    vector<int> prefix(n,0);
    vector<int> pmax(n,0);
    prefix[0] = a[0];
    pmax[0] = a[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + a[i];
        pmax[i] = max(pmax[i-1],a[i]);
    }

    vector<int> ans(q,-1);

    for(int i = 0; i < q; i++){
        int h = query[i];
        int l = 0, r = n-1;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(pmax[mid] <= h){
                ans[i] = mid;
                l = mid+1;
            } else{
                r = mid-1;
            }
        } 
    }

    for(int i = 0; i < q; i++){
        if(ans[i] == -1){
            cout << 0 << " ";
        } else{
            cout << prefix[ans[i]] << " ";
        }
    }
    cout << endl;

}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        Scuza();
    }
}
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



void VikaAndTheBridge() {
    int n,k;
    cin >> n >> k;
    vector<int> c(n);
    takeVectorIn(c);
    vector<int>last(k,-1);
    vector<int> max_step(k),max2_step(k);
    for(int i = 0; i < n; i++){
        int step = i - last[c[i]-1];
        if(step > max_step[c[i]-1]){
            max2_step[c[i]-1] = max_step[c[i]-1];
            max_step[c[i]-1] = step;
        } else if(step > max2_step[c[i]-1]){
            max2_step[c[i]-1] = step;
        }
        last[c[i]-1] = i;
    }

    for(int i = 0; i < k; i++){
        int step = n-last[i];
        if(step > max_step[i]){
            max2_step[i] = max_step[i];
            max_step[i] = step;
        }else if(step > max2_step[i]){
            max2_step[i] = step;
        }
    }
    int ans = 1e9;
    for (int i = 0; i < k; ++i) {
        ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
    }
    cout << ans-1 << endl;
}



signed main(){
    fast_io;
    int t;
	cin >> t;
    while (t--){
        VikaAndTheBridge();
    }

    return 0;
}
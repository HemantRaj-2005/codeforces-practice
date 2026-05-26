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


void YetAnotherCardDeck() {
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> query(q);
    vector<int> ans(q);
    takeVectorIn(arr);
    takeVectorIn(query);
    vector<int> firstPos(51,-1);

    for(int i = 0; i < n; i++){
        if(firstPos[arr[i]] == -1){
            firstPos[arr[i]] = i+1;
        }
    }

    for(int i = 0; i< q; i++){
        int curr = query[i];
        ans[i] = firstPos[curr];
        for(int i = 1; i<= 50; i++){
            if(i != curr && firstPos[i] != -1 && firstPos[i] < firstPos[curr]){
                firstPos[i]++;
            }
        }
        firstPos[curr] = 1;
    }

    for(auto &x : ans){
        cout << x << " ";
    }
    cout << endl;
}


signed main(){
    fast_io;
    int t=1;
    while (t--){
        YetAnotherCardDeck();
    }
}
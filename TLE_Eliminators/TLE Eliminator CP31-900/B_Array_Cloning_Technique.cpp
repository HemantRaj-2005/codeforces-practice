#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    map<int,int> q;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        q[x]++;
    }
    int am = 0;
    for(auto &[x, y] : q){
        am = max(am,y);
    }
    
    int ans = 0;
    while(am < n){
        int d = min(n-am,am);
        ans += 1+d;
        am += d;
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    while(t--) solve();
    return 0;
}
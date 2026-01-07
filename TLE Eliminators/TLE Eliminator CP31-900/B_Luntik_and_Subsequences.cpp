#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    ll ones = 0;
    ll zeros = 0;
    for(int i=0;i<n;i++){ 
        cin >> a[i];
        if(a[i] == 0) zeros++;
        if(a[i] == 1) ones++;
    }
    ll cnt = pow(2,zeros)*ones;
    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin >> t;
    while(t--) solve();
    return 0;
}
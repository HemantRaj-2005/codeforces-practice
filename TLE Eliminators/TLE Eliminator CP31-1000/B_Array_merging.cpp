/*
This code is written by HemantRaj_2005
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<ll> longestA(2*n+1,0);
    vector<ll> longestB(2*n+1,0);
    ll counter = 1;
    for (int i = 1; i < n; i++){
        if(a[i] == a[i-1])
        counter++;
        else {
            longestA[a[i-1]] = max(counter,longestA[a[i-1]]);
            counter = 1;
        }
    }
    longestA[a[n-1]] = max(counter,longestA[a[n-1]]);
    counter = 1;
    for (int i = 1; i < n; i++){
        if(b[i] == b[i-1])
        counter++;
        else {
            longestB[b[i-1]] = max(counter,longestB[b[i-1]]);
            counter = 1;
        }
    }
    longestB[b[n-1]] = max(counter,longestB[b[n-1]]);
    ll ans = -1;
    for(int i = 1; i <= 2*n; i++){
        ans = max(ans,longestA[i]+longestB[i]);
    }

    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}

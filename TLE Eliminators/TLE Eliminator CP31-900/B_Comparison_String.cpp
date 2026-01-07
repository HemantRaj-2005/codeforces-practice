#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    string s;
    cin >> s;
    ll maxCntLess = 0;
    ll maxCntMore = 0;
    ll temp = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '<'){
            temp++;
        } else {
            temp = 0;
        }
        maxCntLess = max(temp,maxCntLess);
    }
    temp = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '>'){
            temp++;
        } else {
            temp = 0;
        }
        maxCntMore = max(temp,maxCntMore);
    }

    cout << max(maxCntLess+1,maxCntMore+1) << endl;
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
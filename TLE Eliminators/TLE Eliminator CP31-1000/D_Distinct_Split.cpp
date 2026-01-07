#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 2;
    map<char,int> a;
    map<char,int> b;
    for(int i = 0; i < n; i++){
        a[s[i]]++;
    }
    ans = a.size();
    for(int i = n-1; i >= 0; i--){
        if(a[s[i]] > 0)
        a[s[i]]--;
        if(a[s[i]] == 0) a.erase(s[i]);
        b[s[i]]++;
        ll lengthOfMaps = a.size()+b.size();
        ans = max(ans,lengthOfMaps);
    }

    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
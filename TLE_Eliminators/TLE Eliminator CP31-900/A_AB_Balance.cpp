#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin >> s;
    ll n = s.size();

   if(s[0] != s[n-1]){
    s[0] = s[n-1];
   }

    cout << s << endl;
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
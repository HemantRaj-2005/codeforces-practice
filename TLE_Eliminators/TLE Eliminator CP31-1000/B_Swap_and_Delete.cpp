#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt0 = 0, cnt1 = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }
    ll sizet = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '0' && cnt1 > 0){
            cnt1--;
            sizet++;
        } else if(s[i] == '1' && cnt0 > 0){
            cnt0--;
            sizet++;
        } else{
            break;
        }
    }

    cout << n-sizet << endl;
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
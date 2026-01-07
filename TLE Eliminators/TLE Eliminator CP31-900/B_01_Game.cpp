#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string s;
    cin >> s;
    ll zeroes = 0, ones = 0;
    ll n = s.size();

    for(ll i = 0; i < n; i++){
        if(s[i] == '0'){
            zeroes++;
        } else {
            ones++;
        }
    }

    if(min(zeroes,ones)%2 == 0) {
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }

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
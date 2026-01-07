#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    if(n%2 == 1 || n < 4){
        cout << -1 << endl;
        return;
    }

    ll maxBus = 0;
    ll temp = n/2;
    if(temp%2 == 1){
        maxBus++;
        temp -= 3;
    }
    maxBus += temp/2;

    ll minBus = 0;
    temp = n/2;
    if(temp%3 == 2){
        temp -= 2;
        minBus++;
    }if(temp%3 == 1){
        temp -= 4;
        minBus += 2;
    }
    minBus += temp/3;
    cout << minBus << " " << maxBus << endl;
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
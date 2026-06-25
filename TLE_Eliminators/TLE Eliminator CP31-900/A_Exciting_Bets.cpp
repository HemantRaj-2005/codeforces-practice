#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll a,b;
    cin >> a >> b;
    if(a == b){
        cout << 0 << " " << 0 << endl;
    } else{
        ll g = abs(a-b);
        ll m = min(a%g, g-a%g);
        cout << g << " " << m << endl;
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    if(n%2 == 1){
        cout << "Odd" << endl;
    }
    else if(n%2 == 0 && n%4 == 0){
        cout << "Even" << endl;
    } else{
        cout << "Same" << endl;
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
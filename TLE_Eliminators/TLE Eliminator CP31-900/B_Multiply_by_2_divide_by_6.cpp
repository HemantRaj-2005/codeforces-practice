#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n; cin >> n;
    ll steps = 0;
    while(n!=1){
        if(n%2 == 1){
            n *= 2;
            steps++;
        }
        if(n%6 != 0){
            cout << -1 << endl;
            return;
        }
        if(n%6 == 0){
            steps++;
            n /= 6;
        }
    }

    cout << steps << endl;

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
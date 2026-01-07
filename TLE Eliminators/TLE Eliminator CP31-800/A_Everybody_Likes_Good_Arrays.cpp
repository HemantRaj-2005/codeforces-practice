#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int contOdds = 0, contEvens = 0;
    for(int i = 1; i < n; i++){
        if(a[i] % 2 == 0 && a[i-1]%2 == 0){
            contEvens++;
        } else if(a[i] % 2 != 0 && a[i-1]%2 != 0){
            contOdds++;
        }
    }
    cout << contEvens+contOdds << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
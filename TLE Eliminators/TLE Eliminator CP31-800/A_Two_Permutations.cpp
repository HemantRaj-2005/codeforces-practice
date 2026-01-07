#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    int maxPossible = n-a-2;
    if( n == a && a == b){
        cout << "Yes" << endl;
        return;
    }
    if(b > maxPossible){
        cout << "No" << endl;
        return;
    } 
    cout << "Yes" << endl;
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
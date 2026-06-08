#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;

    if(b==1){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
        cout << a << " " << a*b << " " << a*b+a << endl; 
    }
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
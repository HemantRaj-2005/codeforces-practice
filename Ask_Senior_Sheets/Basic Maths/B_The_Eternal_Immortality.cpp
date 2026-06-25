#include<bits/stdc++.h>
#define int long long

using namespace std;
 
void solve(){
    int a,b;
    cin >> a >> b;
    if(a == 0) a = 1;
    if(b == 0) b = 1;

    if(a == b){
        cout << 1 << endl;
    } else{
        if(b-a >= 10){
            cout << 0 << endl;
        } else{
            int prod = 1;
            for(int i = 0; i < b-a; i++){
                prod *= (b-i)%10;
            }
            cout << prod%10 << endl;
        }
    }
}
signed main(){
    int t = 1;

    while(t--){
        solve();
    }
    return 0;
}
#include<bits/stdc++.h>
#define int long long

using namespace std;

bool isPrime(int num){
    if(num == 2) return 1;
    for(int i = 2; i*i <= num; i++){
        if(num%i == 0) return 0;
    }
 
    return 1;
}
 
void solve(){
    int d;
    cin >> d;
 
    int p = 0,q = 0;
 
    for(int i = 1+d; i<1e9; i++){
        if(isPrime(i)){
            p = i;
            break;
        }
    }
    for(int i = p+d; i<1e9; i++){
        if(isPrime(i)){
            q = i;
            break;
        }
    }
 
    int op1 = p*p*p;
    int op2 = p*q;
 
    cout << min(op1,op2) << endl;
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()


bool isPrime(int n){
    if(n == 2) return true;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    for(int i = t; i <= 100003; i++){
        if(isPrime(i)){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
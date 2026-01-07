#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int x,k;
    cin >> x >> k;
    /**
     * TODO:  4 conditions here 
     ** 1st k is even x is odd -> 1 move
     ** 2nd k is odd, x is even -> 1 move
     ** 3rd k is even, x is even -> 2 moves (both integers odd)
     ** 4th k is odd, x is odd -> 2 moves (one even and one odd)
     */
    if(x%k == 0){
        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
    }
     else if((k%2 == 0 && x%2 == 1) || (k%2 == 1 && x%2 == 0) || (x%k != 0)){
        cout << 1 << endl;
        cout << x << endl;
     }
     else if((k%2 == 0 && x%2 == 0) ){
        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
     } 
     else {
        cout << 2 << endl;
        cout << k+2 << " " << x-(k+2) << endl;
     }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
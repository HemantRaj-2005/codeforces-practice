#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;
    int ways = 0;
   if(n%2 == 1){
    n = n-3;
    ways++;
   }

   cout << ways+n/2 << endl;

   for(int i = 1; i <= n/2; i++){
    cout << 2 << " ";
   }
   if(ways == 1) cout << 3 << " ";
   cout << endl;
    return 0;
}
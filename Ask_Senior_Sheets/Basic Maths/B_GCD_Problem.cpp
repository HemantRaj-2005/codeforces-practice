#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n%2 == 0){
        cout << n-3 << " " << 2 << " " << 1 << endl;
    } else{
        int cur=(n-1)/2;
		if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
		else cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
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
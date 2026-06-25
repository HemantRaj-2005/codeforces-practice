#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n; 
    vector<int> a(n);
    int odds = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2 == 1){
            odds++;
        }
    }

    if(odds%2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

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
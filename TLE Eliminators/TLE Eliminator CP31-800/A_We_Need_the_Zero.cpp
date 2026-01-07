#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int xorResult = a[0];
    for(int i = 1; i < n; i++){
        xorResult ^= a[i];
    }
    int x = 0;
    for(int i = 0; i < pow(2,8); i++){
        if(n%2 == 0) x = 0;
        else x=i;
        int temp = xorResult;
        temp = temp^x;
        if(temp == 0){
            cout << i << endl;
            return;
        }
    }

    cout << -1 << endl;
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
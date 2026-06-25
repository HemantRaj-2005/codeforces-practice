#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxNum = INT_MIN;
    int minNum = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxNum = max(maxNum, a[i]);
        minNum = min(minNum, a[i]);
    }
    if(maxNum == minNum){
        cout << "NO" << endl;
        return;
    }

    sort(a.rbegin(),a.rend());
    swap(a[n-1],a[1]);
    cout << "YES" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
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
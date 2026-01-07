#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n-1;
    int minSize = n;
    while(i <= j){
        if(s[i] != s[j]){
            i++;
            j--;
        } else {
            break;
        }
    }
    minSize = min(minSize, j-i+1);
    cout << minSize << endl;
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
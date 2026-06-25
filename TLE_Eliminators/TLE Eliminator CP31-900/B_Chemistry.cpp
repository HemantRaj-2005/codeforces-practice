#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> uniques;
    int odds = 0;
    for(int i = 0; i < s.size(); i++){
        uniques[s[i]]++;
    }
    for(auto &[c,cnt] : uniques){
        if(cnt%2){
            odds++;
        }
    }


    if(odds > k+1){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
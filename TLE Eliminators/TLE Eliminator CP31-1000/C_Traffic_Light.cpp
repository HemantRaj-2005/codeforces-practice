#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    ll secs = INT_MIN;
    if(c == 'g'){
        cout << 0 << endl;
        return;
    }
    vector<int> index;
    vector<int> Gindex;
    for(int i = 0; i < n; i++){
        if(s[i] == c){
            index.push_back(i);
        }
    }
    string temp = s;
    s = s+temp;

    for(int i = 0; i <= 2*n; i++){
        if(s[i] == 'g'){
            Gindex.push_back(i);
        }
    }
    int i = 0, j = 0;
    while(i < index.size()){
        while(Gindex[j] < index[i]){
            j++;
        }
        secs = max(secs,(0LL-index[i]+Gindex[j]));
        i++;
    }

    cout << secs << endl;
    

}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

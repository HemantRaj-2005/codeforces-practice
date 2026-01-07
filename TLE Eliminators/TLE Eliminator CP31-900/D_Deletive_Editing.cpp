#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    string str, pat;
    cin >> str >> pat;
    map<char,int> mpp;
    for(int i = 0; i < pat.size(); i++){
        mpp[pat[i]]++;
    }
    for(int i = str.size()-1; i >= 0; i--){
        if(mpp[str[i]] > 0){
            mpp[str[i]]--;
        } else{
            str[i] = '.';
        }
    }

    string final_string = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '.'){
            final_string += str[i];
        }
    }
    
    if(final_string == pat){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1; 
    cin >> t;
    while(t--) solve();
    return 0;
}
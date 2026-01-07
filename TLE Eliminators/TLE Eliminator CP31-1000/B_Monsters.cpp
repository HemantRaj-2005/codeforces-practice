#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> health(n);
    map<int,vector<int>,greater<int>> healthWithIdx;
    for(int i = 0; i < n; i++){

        cin >> health[i];
        
        health[i] = health[i]%k;
        if(health[i] == 0) health[i] = k;
        healthWithIdx[health[i]].push_back(i+1);
    }

    for(auto &it : healthWithIdx){
        for(auto &x : it.second){
            cout << x << " ";
        }
    }
    cout << endl;
    
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
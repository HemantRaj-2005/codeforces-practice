#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

bool compWithId(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.first < b.first;
}

bool compWithInd(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> CitizenId;
    for(ll i = 0; i < n; i++){
        int num;
        cin >> num;
        CitizenId.push_back({num,i});
    }
    ll eachCitizenSweet = k/n;
    ll rem = k%n;
    vector<ll> sweets(n,eachCitizenSweet);
    sort(CitizenId.begin(),CitizenId.end(),compWithId);
    for(int i = 0; i < rem; i++){
        sweets[CitizenId[i].second] += 1;
    }

    for(int i = 0; i < n; i++){
        cout << sweets[i] << endl;
    }

    

    return 0;
}
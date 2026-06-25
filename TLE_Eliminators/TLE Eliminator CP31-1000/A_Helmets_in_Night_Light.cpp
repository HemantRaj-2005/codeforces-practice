#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

bool comp(pair<ll,ll> &a, pair<ll,ll> &b){
    if(a.second == b.second){
        return a.first > b.first;
    }
    return a.second < b.second;
}

void solve(){
    ll n = 0,p = 0; 
    cin >> n >> p;
    vector<pair<ll,ll>> numWithCost(n);
    for(int i = 0; i < n; i++){
        cin >> numWithCost[i].first;
    }
    for(int i = 0; i < n; i++){
        cin >> numWithCost[i].second;
    }
    sort(all(numWithCost), comp);

    if(numWithCost[0].second >= p){
        cout << n*p << endl;
        return;
    }

    ll cost = p;
    ll personsLeft = n-1;
    ll i = 0;
    while(personsLeft > 0 && numWithCost[i].second < p && i < n){
        ll people = numWithCost[i].first;
        ll rec = min(people,max(0LL,personsLeft));
        cost += (numWithCost[i].second)*(rec);
        personsLeft -= people;
        i++;
    }
    if(personsLeft > 0){
        cost += personsLeft*p;
    }

    cout << min(cost,n*p) << endl;
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
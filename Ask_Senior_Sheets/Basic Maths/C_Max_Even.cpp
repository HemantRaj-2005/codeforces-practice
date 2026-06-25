#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(all(a));
    int sumOdd = 0, cntOdd = 0, sumEven = 0, cntEven = 0;
    for(int i = n-1; i >= 0; i--){
        if(a[i]%2 == 1 && cntOdd < 2){
            sumOdd += a[i];
            cntOdd++;
        }
        if(a[i]%2 == 0 && cntEven < 2){
            sumEven += a[i];
            cntEven++;
        }
    }

    if(cntOdd < 2 && cntEven < 2){
        cout << -1;
    } else if(cntOdd == 2 && cntEven < 2){
        cout << sumOdd;
    }
    else if(cntEven == 2 && cntOdd < 2){
        cout << sumEven;
    } else{
        cout << max(sumOdd,sumEven);
    }
    return 0;
}
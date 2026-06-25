#include <bits/stdc++.h>
#define ll long long

using namespace std;

int gcd(int a, int b){
    if(b == 0 )
        return a;
    return gcd(b, a%b);
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool gcdLessThan2 = false;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(gcd(a[i], a[j]) <= 2){
                gcdLessThan2 = true;
                break;
            }
        }
    }

    if(gcdLessThan2){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
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
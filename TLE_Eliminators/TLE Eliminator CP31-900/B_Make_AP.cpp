#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    ll a,b,c;
    cin >> a >> b >> c;

    int d1 = b-a, d2 = c-b, d3 = c-a;

    bool possible = false;

    int c1 = b+d1;
    int a2 = b-d2;
    int b3 = a+(d3/2);

    if(b-a == c-b){
        possible = true;
    }
    
    if(c1 > c && c1%c == 0){
        possible = true;
    }

    if(a2 > a && a2%a == 0){
        possible = true;
    }

    if(b3 > b && b3%b == 0 && d3%2 == 0){
        possible = true;
    }

    if(possible){
        cout << "YES" << endl;
    } else{
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
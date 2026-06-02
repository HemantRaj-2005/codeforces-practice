#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    vector<int> divs;
    for(int i = 1; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            divs.push_back(i);
        }
    }

    cout << divs[divs.size()-k] << endl;
    return 0;
}
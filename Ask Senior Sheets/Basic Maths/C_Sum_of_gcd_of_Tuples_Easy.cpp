#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll k;
    cin >> k;
    ll gcdSum = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++){
            for(int z = 1; z <= k; z++){
                int temp = __gcd(i,j);
                gcdSum += __gcd(temp,z);
            }
        }
    }

    cout << gcdSum << endl;
    return 0;
}
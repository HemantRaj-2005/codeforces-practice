#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int nums = 0;
    
    int num_of_dig = 1;
    while(n >= pow(10, num_of_dig)){
        num_of_dig++;
    }
    int firstDig = n/pow(10, num_of_dig-1);

    nums = (num_of_dig-1)*9 + firstDig;

    cout << nums << endl;
    
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
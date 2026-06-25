#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
    int n;
    cin >> n;

    vector<int> digs;
    int temp = n;
    while(temp){
        digs.push_back(temp%10);
        temp /= 10;
    }

    int ans = 1;

    int m = digs.size();

    int prod = 1;
    for(int i = m-1; i >= 0; i--){
        prod = 1;

        for(int j = m-1; j > i; j--){
            prod *= digs[j];
        }

        if(digs[i] > 1) prod *= (digs[i]-1);

        for(int k = i-1; k >= 0; k--){
            prod *= 9;
        }

        ans = max(ans,prod);
    }
    
    prod = 1;
    for(int i = m-1; i >= 0; i--){
        prod *= digs[i];
    }
    ans = max(ans,prod);

    cout << ans << endl;

    return 0;
}
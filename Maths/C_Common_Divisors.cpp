#include <bits/stdc++.h>
#define int long long

const int MOD = 1e9+7;

using namespace std;

signed main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto &x: nums) cin >> x;
    int hcf = 0;
    for(auto &x: nums){
        hcf = __gcd(hcf,x);
    }

    int ans = 1;
    for(int i = 2; i*i <= hcf; i++){
        int cnt = 0;
        while(hcf%i == 0){
            cnt++;
            hcf /= i;
        }
        ans *= (cnt+1);
    }
    if(hcf > 1) ans *= 2;

    cout << ans << endl;
    
}
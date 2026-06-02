#include <bits/stdc++.h>
#define int long long


using namespace std;

vector<int> dp(4001,-1);

int solve(int i, int a, int b, int c){
    
}

signed main(){
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {

        if((s[i]-'0') % 4 == 0)
            ans++;

        if(i > 0) {
            int num = (s[i-1]-'0') * 10 + (s[i]-'0');

            if(num % 4 == 0)
                ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
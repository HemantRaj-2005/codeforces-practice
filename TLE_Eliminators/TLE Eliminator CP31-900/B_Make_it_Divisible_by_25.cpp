#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve(){
    // the last two numbers should be in the pattern 00,25,50 and 75
    ll n;
    cin >> n;
    string s = to_string(n);
    ll sz =s.size();

    int best = 1e9;
    vector<string> patterns = {"00", "25", "50", "75"};

    for (string p : patterns) {
        int second = -1, first = -1;
            for (int i = sz-1; i >= 0; i--) {
                if (second == -1 && s[i] == p[1]) second = i;
                else if (second != -1 && s[i] == p[0]) {
                    first = i;
                    int between = second - first - 1;
                    int after = sz - second - 1;
                    best = min(best, between + after);
                    break;
                }
            }
    }

    cout << best << endl;
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
#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define int128 unsigned __int128
const int MOD = 1e9+7;

using namespace std;

template <typename T>
void takeVectorIn(vector<T> &v){
    for (auto &i : v){
        cin >> i;
    }
}

template <typename T>
T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }


// Brtue Force

void BalancedString() {
    string s;
    cin >> s;
    int n = s.size();

    vector<bool> present(26, false);
    for(char ch : s)
        present[ch - 'a'] = true;

    for(int l = 0; l < n; l++) {
        vector<int> freq(26, 0);

        for(int r = l; r < n; r++) {
            freq[s[r] - 'a']++;   

            int mx = INT_MIN;
            int mn = INT_MAX;

            for(int c = 0; c < 26; c++) {
                if(present[c]) {
                    mx = max(mx, freq[c]);
                    mn = min(mn, freq[c]);
                }
            }

            if(mx - mn > 1) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}


// Optimized 
void BalancedString() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> freq(26,-1);
    for(int i = 0; i < n; i++){
        freq[s[i]-'a'] = 0;
    }
    int k = 0;
    for(int i = 0; i < 26; i++)
        if(freq[i] == 0) 
            k++;
    vector<int> last(26,-1);

    for(int i = 0; i < n; i++){
        if(last[s[i] - 'a'] == -1){
            last[s[i] - 'a'] = i;
        } else{
            if(i - last[s[i]-'a'] != k){
                cout << "NO" << endl;
                return;
            } else{
                last[s[i]-'a'] = i;
            }
        }
    }
    cout << "YES" << endl;

}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        BalancedString();
    }
}
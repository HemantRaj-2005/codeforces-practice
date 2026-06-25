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


void JojoAdventure(){
	string s;
    cin >> s;
    int n = s.size();
    string t = s+s;
    int maxOnes = 0;
    int temp = 0;
    for(int i = 0; i < 2*n; i++){
        if(t[i] == '1'){
            temp++;
        } else{
            temp = 0;
        }
        maxOnes = max(maxOnes,temp);
    }
    if(maxOnes == 2*n){
        cout << 1LL*n*n << endl;
        return;
    }
    int a = (maxOnes+1)/2;
    int b = (maxOnes+2)/2;

    cout << a*b << endl;
    
}


signed main(){
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        JojoAdventure();
    }
}
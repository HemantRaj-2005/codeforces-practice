#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) ((int)(v).size())
#define F first
#define S second

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    int maxi = 0;
     int mini = INT_MAX;
     int indMx = 0;
     int indMn = 0;
     for(int i = 0;i<n;i++){
        if(a[i] > maxi){
          maxi = a[i];
          indMx = i;
        }
     }
       for(int i = 0;i<n;i++){
        if(a[i] <= mini){
          mini = a[i];
          indMn = i;
        }
     }
     
 
     if(indMx < indMn){
          cout<<indMx + (n - 1 - indMn) <<endl;
     }
     else  cout<<indMx + (n - 1 - indMn) - 1<<endl;
 
}

int main()
{
    fast_io;

    solve(); 
    return 0;
}

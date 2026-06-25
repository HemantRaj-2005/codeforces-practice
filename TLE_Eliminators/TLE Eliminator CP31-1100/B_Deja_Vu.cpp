#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

template <typename T>
void print_1dvector(vector<T> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

template <typename T>
void take_1d_vector_input(vector<T> &v)
{
    for (auto &i : v)
    {
        cin >> i;
    }
}

template <typename T>
T gcd(T a, T b) { return b == 0 ? a : gcd(b, a % b); }


void solve()
{
    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> x(q);
    take_1d_vector_input(arr);
    take_1d_vector_input(x);
    vector<int> powof2(32,1);
    int num = 1;
    for(int i = 0; i <= 31; i++){
        powof2[i] = num;
        num = num*2;
    }

    int prev = powof2[31];
   
    for(int i = 0; i < q; i++){
        if ( powof2[x[i]]  >= prev) continue;
        for(int j = 0; j < n; j++){
            if(arr[j]%powof2[x[i]] == 0){
                arr[j] = arr[j] + powof2[x[i]-1];
            }
        }
        prev = powof2[x[i]];
    }
    print_1dvector(arr);
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
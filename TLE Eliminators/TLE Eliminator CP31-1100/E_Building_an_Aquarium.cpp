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

bool check(vector<int> &arr, int mid, int x){
    int levels = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(mid >= arr[i]){
            levels += (mid-arr[i]);
        }
    }

    return levels > x;
}

void buildAquarium(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    take_1d_vector_input(arr);
    int max_h = 1e12;
    int min_h = 0;
    while(min_h + 1 < max_h){
        int mid = min_h + (max_h-min_h)/2;
        if(check(arr,mid,x)){
            max_h = mid;
        } else {
            min_h = mid;
        }
    }

    cout << min_h << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        buildAquarium();
    }
}
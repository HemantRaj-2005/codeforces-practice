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
    int n;
    cin >> n;
    vector<int> arr(n);
    take_1d_vector_input(arr);
    int ans = 0;

    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }

    for (int k = 1; k <= n; k++)
    {
        if (n % k != 0)
            continue;

        int max_weight = -1;
        int min_weight = 2e18;
        for (int i = 0; i < n; i += k)
        {
            int curr = prefix[i + k] - prefix[i];
            max_weight = max(max_weight, curr);
            min_weight = min(min_weight, curr);
        }
        ans = max(ans, max_weight - min_weight);
    }

    cout << ans << endl;
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
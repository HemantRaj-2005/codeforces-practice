#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int left = 0;
    int sum = 0;
    int longest = -1;

    for (int right = 0; right < n; right++) {
        sum += a[right];

        while (left <= right && sum > s) {
            sum -= a[left];
            left++;
        }

        if (sum == s) {
            longest = max(longest, right - left + 1);
        }
    }

    if (longest == -1)
        cout << -1 << '\n';
    else
        cout << n - longest << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
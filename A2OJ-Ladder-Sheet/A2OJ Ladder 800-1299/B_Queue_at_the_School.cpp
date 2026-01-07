#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--)
    {
        vector<int> index;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                index.push_back(i);
            }
        }

        for (int i = 0; i < index.size(); i++)
        {
            swap(s[index[i]], s[index[i]+1]);
        }
    }

    cout << s;

    return 0;
}
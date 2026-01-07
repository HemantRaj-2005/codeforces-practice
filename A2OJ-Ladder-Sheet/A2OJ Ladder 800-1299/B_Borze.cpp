#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    vector<int> num;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == '.')
        {
            num.push_back(0);
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            num.push_back(1);
            i+=2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            num.push_back(2);
            i+=2;
        }
    }

    for(int t : num){
        cout << t;
    }

    return 0;
}
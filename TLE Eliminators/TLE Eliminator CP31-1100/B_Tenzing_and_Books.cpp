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

using namespace std;

template <typename T>
void takeVectorIn(vector<T> &v){
    for (auto &i : v)
    {
        cin >> i;
    }
}


bool valid(int num, int x){
    return (num | x) == x;
}

void TenzingAndBooks(){
    int n, x;
    cin >> n >> x;

    vector<int> a(n), b(n), c(n);

    takeVectorIn(a);
    takeVectorIn(b);
    takeVectorIn(c);

    int ans = 0;

    for(int num : a){
        if(!valid(num, x)) break;
        ans |= num;
    }

    for(int num : b){
        if(!valid(num, x)) break;
        ans |= num;
    }

    for(int num : c){
        if(!valid(num, x)) break;
        ans |= num;
    }

    cout << (ans == x ? "Yes" : "No") << endl;
}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        TenzingAndBooks();
    }
}
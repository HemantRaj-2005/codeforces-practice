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
void takeVectorIn(vector<T> &v)
{
    for (auto &i : v)
    {
        cin >> i;
    }
}

// Using __int128 for calculation to prevent overflow
bool check(vector<int> &s, int w, int c){
    int128 area = 0; 
    for(int x : s){
        int128 side = (int128)x + 2 * (int128)w;
        area += (side * side);
        if(area >= (int128)c) return true;
    }
    return area >= (int128)c;
}

void CardboardForPicture(){
    int n,c;
    cin >> n >> c;
    vector<int> s(n);
    takeVectorIn(s);
    int minw = 0, maxw = 1e9;
    // * if border width is increased by w, the area will increase by 
    // * initially a*a = a^2, after (a+2w)*(a+2w) = a^2 + 4w^2 + 2aw, diff = w^2 + 2aw
    // * calculate all area, then calculate area on increasing w by binary search

    while(minw+1 < maxw){
        int mid = minw + (maxw-minw)/2;
        if(check(s,mid,c)){
            maxw = mid;
        } else {
            minw = mid;
        }
    }

    cout << maxw << endl;

}

signed main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        CardboardForPicture();
    }
}
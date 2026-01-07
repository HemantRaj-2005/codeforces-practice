#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int y;
    cin >> y;

    while(true){
        y += 1;
        int a = y/1000; // first digit
        int b = y/100 %10; // second digit
        int c = y/10 %10; // third digit
        int d = y%10; //fourth digit 

        if(a != b && a != c && a != d && b!=c && b!=d && c!=d){
            cout << y;
            break;
        }
    }

    return 0;
}
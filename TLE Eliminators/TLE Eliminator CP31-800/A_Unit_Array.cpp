#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    int minusOne = 0, One = 0;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == -1){
            minusOne++;
        } else {
            One++;
        }
    }

    int ops = 0;
    
    if(minusOne%2 == 1){
        minusOne--;
        One++;
        ops++;
    }

    int sum = One - minusOne;
    if(sum < 0){
        sum = sum*(-1);
        if(sum%2 == 1)sum++;
        ops += sum/2;
        minusOne -= sum/2;
        One += sum/2;
    }
    if(minusOne%2 == 1){
        minusOne--;
        One++;
        ops++;
    }

    cout << ops << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
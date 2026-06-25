#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int k = 0;
    bool mulIsEqual = false;


    while(k < n-1){
        int num2BeforeK = 0, num2AfterK = 0;
        for(int i = 0; i <= k; i++){
            if(a[i] == 2){
                num2BeforeK++;
            }
        }
        for(int i = k+1; i < n; i++){
            if(a[i] == 2){
                num2AfterK++;
            }
        }

        if(num2BeforeK == num2AfterK){
            mulIsEqual = true;
            break;
        }
        k++;
    }

    if(mulIsEqual){
        cout << k+1 << endl;
    } else{
        cout << -1 << endl;
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
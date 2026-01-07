#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b,c;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int num = *max_element(a.begin(),a.end());
    for(int i = 0; i < n; i++){
        if(a[i] != num){
            b.push_back(a[i]);
        } else{
            c.push_back(a[i]);
        }
    }
    if(b.size() == 0 || c.size() == 0){
        cout << -1 << endl;
    } else{
        cout << b.size() << " " << c.size() << endl;
        for(int i=0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
        for(int i=0; i < c.size(); i++){
            cout << c[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}
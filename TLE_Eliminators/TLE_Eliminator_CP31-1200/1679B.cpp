#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

template<typename T>
void printVector(vector<T>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

template<typename T>
void takeInput(vector<T> &v){
    for(auto &i : v){
        cin >> i;
    }
}


signed main(){
    fast_io;

    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<int> lastUpdate(n,0);
    int prevSum = 0, sum = 0;
    for(auto &x : arr){
        cin >> x;
        sum += x;
    }
    prevSum = sum;
    int lastAssign = -1;
    int currTime = 0;
    int assignTime = 0;

    while(q--){
        int t;
        cin >> t;
        currTime++;
        if(t == 1){
            int i,x;
            cin >> i >> x;
            int currVal;
            if(lastUpdate[i-1] < ){

            }
            arr[i-1] = x;
            prevSum = sum;
        } 
        if(t == 2){
            int x;
            cin >> x;
            lastAssign = x;
            sum = n*x;
            prevSum = sum;
        }
        cout << sum << endl;
    }
}
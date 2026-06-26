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

vector<int> primeNos;

void sieve(int n){
    vector<bool> prime(n+1,true);
    for(int p = 2; p*p <= n; p++){
        if(prime[p] == true){
            for(int i = p*p; i <= n; i+=p){
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++){
        if (prime[p]){ 
            primeNos.push_back(p);
        }
    }
}

int power(int num, int p){
    int res = 1;
    while(p){
        if(p & 1){
            res = res*num;
        }
        num = num*num;
        p >>= 1;
    }

    return res;
}

int SumOfFactors(int num){

    int ans = 1;

    for(int i = 0; i < primeNos.size() && primeNos[i] * primeNos[i] <= num ; i++){
        int p = 0;
        while(num%primeNos[i] == 0){
            p++;
            num /= primeNos[i];
        }

        if (p > 0) {
            ans *= (power(primeNos[i], p+1) - 1) / (primeNos[i] - 1);
        }

        if(num == 1){
            return ans;
        }
    }
    if (num > 1) {
        ans *= (num * num - 1) / (num - 1);
    }

    return ans;
}

void solve(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    takeInput(arr);
    int mx = *max_element(all(arr));
    sieve(mx);

    for(int i = 0; i < n; i++){
        int sum = SumOfFactors(arr[i]);
        sum -= arr[i];
        if(sum > arr[i]){
            cout << "abundant" << endl;
        } else if(sum < arr[i]){
            cout << "deficient" << endl;
        } else {
            cout << "perfect" << endl;
        }
    }
}

signed main(){
    fast_io;
    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }
}
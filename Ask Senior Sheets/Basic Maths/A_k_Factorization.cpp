#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
    int n,k;
    cin >> n >> k;
    vector<int> facts;
    int primeFact = 0;
    map<int,int> mpp;
        
    while(n%2 == 0){
        facts.push_back(2);
        n/=2;
    }
        
    for(int i = 3; i*i <= n; i+=2){
        while(n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }
        
    if(n>2){
        facts.push_back(n);
    }

    int m = facts.size();

    if(m < k){
        cout << -1 << endl;
        return 0;
    } 

    for(int i = 0; i < k-1; i++){
        cout << facts[i] << " ";
    }
    int prod = 1;
    for(int i = k-1; i < m; i++){
        prod *= facts[i];
    }
    cout << prod << endl;
    return 0;
}
    


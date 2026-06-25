/*
Code written by - HemantRaj_2005
*/
#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

template<typename T>
void take_1d_vector_input(vector<T> &v){
    for(auto &i : v){
        cin >> i;
    }
}


int main(){
    fast_io;
    ll n,d;
    cin >> n >> d;
    vector<ll> powers(n);
    take_1d_vector_input(powers);
    int i = 0, j = n-1;
    sort(rall(powers));
    ll temp = 0;
    int teams = 0;
    while(i <= j){        
        ll needed = d/powers[i] + 1;
        if(j-i+1 >= needed){
            teams++;
            i++;
            j-=(needed-1);
        } else{
            break;
        }
        
    }

    cout << teams << endl;
    return 0;
}
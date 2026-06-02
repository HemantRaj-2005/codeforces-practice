#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll N,A,B;
    cin >> N >> A >> B;
    ll rowBalls = A+B;
    ll rows = N/rowBalls;
    ll rem = N%rowBalls;
    ll blues = A*rows + min(A,rem);

    cout << blues << endl;
}
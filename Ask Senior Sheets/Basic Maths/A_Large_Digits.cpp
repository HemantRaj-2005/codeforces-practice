#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int suma=0,sumb=0;
    while(a){
        suma += a%10;
        a /= 10;
    }
    while(b){
        sumb += b%10;
        b /= 10;
    }

    cout << max(suma,sumb) << endl;
}
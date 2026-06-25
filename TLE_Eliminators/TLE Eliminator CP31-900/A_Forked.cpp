#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int a,b,xk,yk,xq,yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int,int>> kingPos;
    set<pair<int,int>> queenPos;
    int cnt = 0;
    int delRow[] = {a, a, -a, -a, b, b, -b, -b};
    int delCol[] = {b, -b, b, -b,  a, -a, a, -a};
    
    for(int i = 0; i < 8; i++){
        int kingRow = xk+delRow[i];
        int kingCol = yk+delCol[i];
        kingPos.insert({kingRow,kingCol});
    }
    for(int i = 0; i < 8; i++){
        int queenRow = xq+delRow[i];
        int queenCol = yq+delCol[i];
        queenPos.insert({queenRow,queenCol});
    }

    for(auto it : kingPos){
        if(queenPos.find(it) != queenPos.end()){
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
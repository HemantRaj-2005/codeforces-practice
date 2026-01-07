#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   vector<vector<int>>matrix(5,vector<int>(5));
   int indexi,indexj;

   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        cin >> matrix[i][j];

        if(matrix[i][j] == 1){
            indexi = i;
            indexj = j;
        }
    }
   }

   cout << abs(2-indexi) + abs(2-indexj) << endl;



    return 0;
}
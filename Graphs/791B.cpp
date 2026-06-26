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

void solve(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> edges(m);
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool> vis(n+1,0);
    queue<int> q;
    for(int i = 1; i <= n; i++){
        int vertextCnt = 1;
        int edgeCnt = 0;
        if(!vis[i]){
            q.push(i);
            vis[i] = 1;
        }

        while(!q.empty()){
            int u = q.front();
            edgeCnt += adj[u].size();
            q.pop();
            for(auto &v : adj[u]){
                if(!vis[v]){
                    q.push(v);
                    vis[v] = 1;
                    vertextCnt++;
                }
            }
        }

        if(edgeCnt != vertextCnt*(vertextCnt-1)){
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;

}

signed main(){
    fast_io;
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
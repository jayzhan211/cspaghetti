#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        vector<vector<int>> g(n, vector<int>());
        for(int i=0;i<m;i++) {
            int u, v;
            cin>>u>>v;
            u--, v--;
            g[u].push_back(v);
        }
        vector<int> res(n);
        vector<int> vis(n);
        
        function<void(int, bool)> dfs = [&](int u, bool loop) {
            
            if(loop) {
                res[u] = -1;
            } else if(res[u] < 2) {
                res[u]++;
            }
            
            vis[u] = 1;
            for(int v: g[u]) {
                if(res[v] == -1) continue;
                if(vis[v] == 1) dfs(v, true);
                else if(res[v] < 2 || (res[v] == 2 && loop)) dfs(v, loop);
            }
            vis[u] = 2;
        };
        
        dfs(0, false);
        
        for(int i=0;i<n;i++) {
            printf("%d ", res[i]);
        }
        puts("");
        
    }
    
}

// https://codeforces.com/contest/813/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

vector<vector<int>> adj;
vector<bool> visited;    

int dfs(int u,int& ans) {
    visited[u] = true;
    int max_depth = 0;
    for (int v : adj[u]) {
        if (!visited[v]) {
            max_depth = max(max_depth, dfs(v,ans));
            ans=max(ans,max_depth);
        }
    }
    return max_depth + 1;
}



void solve() {
   int n,x,ans=-1;
   cin>>n>>x;
   adj.assign(n + 1, vector<int>());
   visited.assign(n + 1, false);
   for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);

   }
   dfs(1,ans);
    cout<<ans*2<<endl;
   
}




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}

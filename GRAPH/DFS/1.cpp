// https://cses.fi/problemset/task/1666


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

const int MAXN = 100005;
vector<int> adj[MAXN];   
bool visited[MAXN];      

void dfs(int u){
    visited[u]=true;
    for(int v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}



void solve() {
    int n, m;
    cin >> n >> m;
    // Input roads
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); 
    }

    vector<int> check;

for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
        check.push_back(i);
        dfs(i); // mark all connenctrd node to i as visited
    }
}
// size of check will be number of connected component

cout<<check.size()-1<<endl;
for(int i=0;i<check.size()-1;i++){
    cout<<check[i]<<" "<<check[i+1]<<endl;
}
   
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

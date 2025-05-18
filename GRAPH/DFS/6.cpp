// https://codeforces.com/contest/802/problem/J


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
vector<pair<int, int>> adj[MAXN];  
bool visited[MAXN]; 
ll sum=0,ans=0;

void dfs(int u) {
    visited[u] = true;
    bool is_leaf = true;
    for (auto [v, cost] : adj[u]) {
        if (!visited[v]) {
            is_leaf = false;
            sum += cost;
            dfs(v);
            sum -= cost; 
        }
    }
    if (is_leaf) {
        ans = max(ans, sum);
    }
}



void solve() {
   int n;
   cin>>n;
   for (int i = 0; i < n-1; ++i) {
    int u, v, cost;
    cin >> u >> v >> cost;
    adj[u].push_back({v, cost});
    adj[v].push_back({u, cost});
}
dfs(0);
cout<<ans<<endl;
   
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

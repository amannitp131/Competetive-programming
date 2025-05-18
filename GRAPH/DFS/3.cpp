// https://codeforces.com/problemset/problem/580/C

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
vector<int> arr; 

int n, m, ans;

void dfs(int u, int cnt) {
    visited[u] = true;
    if (arr[u - 1] == 1) cnt++;
    else cnt = 0;
    if (cnt > m) return;
    bool isLeaf = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            isLeaf = false;
            dfs(v, cnt);
        }
    }
    if (isLeaf) ans++;
}

void solve() {
    cin >> n >> m;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        visited[i] = false;
    }
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    ans = 0;
    dfs(1, 0);
    cout << ans << endl;
}

int main() {
    fast();
    solve();
    return 0;
}

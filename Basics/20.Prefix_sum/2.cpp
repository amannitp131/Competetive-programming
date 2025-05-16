// https://codeforces.com/contest/1807/problem/D


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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<ll> ps(n, 0);
    ps[0] = arr[0];
    for (int i = 1; i < n; i++) {
        ps[i] = ps[i - 1] + arr[i];
    }
    ll sum = ps[n - 1];
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        ll seg_sum = ps[b] - (a > 0 ? ps[a - 1] : 0);
        ll new_sum = sum - seg_sum + 1LL * c * (b - a + 1);
        if (new_sum % 2 == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}




int main() {
    fast();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}

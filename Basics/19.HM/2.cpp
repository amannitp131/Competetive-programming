// https://codeforces.com/problemset/problem/1850/F

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
    int n;
    cin >> n;

    vector<int> vec(n);
    int max_val = 0;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        max_val = max(max_val, vec[i]);
    }

    vector<int> freq(max_val + 1, 0);
    for (int x : vec) freq[x]++;

    vector<int> count(max_val + 1, 0);

    for (int i = 1; i <= max_val; i++) {
        for (int j = i; j <= max_val; j += i) {
            count[j] += freq[i];  
        }
    }

    int max_count = 0;
    for (int c : count) {
        max_count = max(max_count, c);
    }

    cout << max_count << endl;
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

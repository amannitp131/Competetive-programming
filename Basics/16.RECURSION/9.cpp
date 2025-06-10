// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y


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

void recr(int n,int m,int& ans){
    if(n==m){
        ans++;
        return;
    }
    if(n+1<=m){
      recr(n+1,m,ans);
    }
    if(n+2<=m){
    recr(n+2,m,ans);
    }
    if(n+3<=m){
    recr(n+3,m,ans);
    }
}


void solve() {
   int n,m,ans=0;
   cin>>n>>m;
   recr(n,m,ans);
   cout<<ans;
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

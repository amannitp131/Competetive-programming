// https://codeforces.com/contest/44/problem/A

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
   cin>>n;
   set<pair<string,string> > st;
   for(int i=0;i<n;i++){
    string a,b;
    cin>>a>>b;
    pair<string,string> p1=make_pair(a,b);
    st.insert(p1);

   }
   cout<<st.size()<<endl;
   
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

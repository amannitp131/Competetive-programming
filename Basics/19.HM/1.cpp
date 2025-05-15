
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
   ll n,ans=0;
   cin>>n;
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
        if(i==(n/i)){
            ans+=i;
        }else{
           ans+=(i)+(n/i);
        }
       
    }
   }
   cout<<ans+1<<endl;
   

   
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

// https://codeforces.com/problemset/problem/1738/B


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
   int n,k;
   cin>>n>>k;
   vector<ll> vec(k);
   for(int i=0;i<k;i++){
    cin>>vec[i];
   }
   int lt=vec[0]%(n-k+1)==0?vec[0]/(n-k+1):(vec[0]/(n-k+1))+1;
   for(int i=1;i<k;i++){
    if(vec[i]-vec[i-1]<lt){
        cout<<"NO"<<endl;
        return;
    }else{
        lt=vec[i]-vec[i-1];
    }
   }
cout<<"YES"<<endl;
   
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

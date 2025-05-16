// https://codeforces.com/problemset/problem/363/B


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
   vector<int> arr(n),ps(n,0);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ps[0]=arr[0];
   for(int i=1;i<n;i++){
    ps[i]=ps[i-1]+arr[i];
   }
   int ans=0;ll sum=0,f;
   k--;
   while(k<n){
      if(ans==0){
        sum=ps[k];
        f=ans;
      }else{
        if(sum>ps[k]-ps[ans-1]){
            sum=ps[k]-ps[ans-1];
            f=ans;
        }

      }
      k++;ans++;
   }
cout<<f+1<<endl;

   
   
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

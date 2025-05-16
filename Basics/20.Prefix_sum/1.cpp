// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/H


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
   string s;
   cin>>s;
   vector<int> arr(s.length(),0);
   if(s[0]=='a') arr[0]=1;
   else arr[0]=0;

   for(int i=1;i<s.length();i++){
    if(s[i]=='a'){
        arr[i]=arr[i-1]+1;
    }else{
        arr[i]=arr[i-1];
    }
   }
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    if(a==0){
        cout<<arr[b]<<endl;
    }else{
        cout<<arr[b]-arr[a-1]<<endl;
    }
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

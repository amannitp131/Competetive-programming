// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

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

bool recr(const vector<int>& vec, int idx){
    if(idx >= vec.size() / 2){
        return true;
    }
    if(vec[idx] != vec[vec.size()-1-idx]){
        return false;
    }
    return recr(vec, idx+1);
}


void solve() {
   int n;
   cin>>n;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   if(recr(vec,0)){
    cout<<"YES";
   }else{
    cout<<"NO";
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

// https://codeforces.com/contest/450/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }


void solve() {
   int n,m;
   cin>>n>>m;
   queue<pair<int,int>> que;
   for(int i=0;i<n;i++){
    int k;
    cin>>k;
    que.push({i+1,k});
   }
   int ans;
   while(!que.empty()){
    if(que.front().second<=m){
        ans=que.front().first;
        que.pop();
    }else{
        que.push({que.front().first,que.front().second-m});
        que.pop();
    }
   }
   cout<<ans<<endl;
   
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

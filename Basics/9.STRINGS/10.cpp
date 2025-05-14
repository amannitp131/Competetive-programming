// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C


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
   string x,y;
   cin>>x>>y;
   for(int i=0;i<min(x.length(),y.length());i++){
    if(x[i]<y[i]){
        cout<<x<<endl;
        return;
    }else if(x[i]>y[i]){
        cout<<y<<endl;
        return;
    }else{
        continue;
    }
   }
   if(x.length()>=y.length()){
        cout<<y<<endl;
        return;
   }
   cout<<x<<endl;
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

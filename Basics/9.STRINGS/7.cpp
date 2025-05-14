// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

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
    int n;
    cin>>n;
   string s;
   cin>>s;
   ll ans=0;
   for(int i=0;i<n;i++){
    ans+=(s[i]-'0');
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


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
   ll a,b;
   cin>>a>>b;
   cout<<a<<" + "<<b<<" = "<<a+b<<endl;
   cout<<a<<" * "<<b<<" = "<<a*b<<endl;
   cout<<a<<" - "<<b<<" = "<<a-b<<endl;
   
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

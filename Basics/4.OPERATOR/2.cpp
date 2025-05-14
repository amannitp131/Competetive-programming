// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D


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
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   cout<<"Difference = "<<(a*b)-(c*d)<<endl;
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

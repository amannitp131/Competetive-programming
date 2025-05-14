// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F


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
   string s;
   cin>>s;
   if(s.length()>10){
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
   }else{
    cout<<s<<endl;
   }
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

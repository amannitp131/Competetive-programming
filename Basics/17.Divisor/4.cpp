// https://cses.fi/problemset/task/1713


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
   int n, ans = 0;
   cin >> n;
   for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
         ans++; 
         if (i * i != n) 
            ans++; 
      }
   }
   cout << ans << endl;
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

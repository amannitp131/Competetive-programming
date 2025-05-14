// https://codeforces.com/problemset/problem/762/A

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
   ll n, k;
   cin >> n >> k;
   vector<ll> small, large;

   // Array of divisor made in sorted order
   for (ll i = 1; i * i <= n; i++) {
      if (n % i == 0) {
         small.push_back(i);
         if (i * i != n)
            large.push_back(n / i);
      }
   }
   for (int i = (int)large.size() - 1; i >= 0; --i){
        small.push_back(large[i]);
   }
     
   // condition checked
   if ((ll)small.size() < k)
      cout << -1 << endl;
   else
      cout << small[k - 1] << endl;
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

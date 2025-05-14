// https://vjudge.net/problem/HackerRank-si-lcm-and-hcf
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
   ll a, b;
   cin >> a >> b;


//    Time complexity of O((min(a, b)))
//    for(int i=1;i*i<=min(a,b);i++){
//     if(a%i==0 && b%i==0){
//         gcd=i;
//     }
//    }
//    lcm = (a / gcd) * b; // to avoid overflow

// Euclidean method 
// Time complexity : O(log(min(a, b)))
   ll x = a, y = b;
   while (y != 0) {
      ll temp = y;
      y = x % y;
      x = temp;
   }
   ll gcd = x;
   ll lcm = (a / gcd) * b; // to avoid overflow
   cout << gcd << " " << lcm << endl;
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

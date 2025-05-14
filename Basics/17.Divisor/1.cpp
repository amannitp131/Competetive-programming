// https://vjudge.net/problem/Gym-405759K

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

//    Basic soln of O(n)
//    for(int i=1;i<=n;i++){
//     if(n%i==0){
//         cout<<i<<endl;
//     }
//    }

// Optimize with  O(sqrt(n))
   for(int i=1;i*i<=n;i++){
    if(n%i==0){
        cout<<i<<endl;
        if(i*i!=n){
           cout<<n/i<<endl;
        }
        
    }
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

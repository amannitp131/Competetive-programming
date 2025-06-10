// https://codeforces.com/contest/1526/problem/C2
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
   vector<int> arr(n);
   ll sum=0;
   int ans=0;
   priority_queue<int, vector<int>, greater<int>> pq;
   for(int i=0;i<n;i++){
      cin>>arr[i];
      sum += arr[i];
      pq.push(arr[i]);
      ans++;
      if(sum < 0){
         sum -= pq.top();
         pq.pop();
         ans--;
      }
   }
   cout<<ans<<endl;
   pq.
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

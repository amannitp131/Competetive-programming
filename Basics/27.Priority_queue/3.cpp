// https://cses.fi/problemset/task/1164
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
   vector<tuple<int,int,int>> customers(n);
   for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    customers[i]={a,b,i};
   }
// sort the customer on basis of their arrival time
   sort(customers.begin(),customers.end());
   vector<int> assigned(n);
//  to get the list of customer in increasing order of their departure time
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
   int cnt=0;
   for(auto &[a,b,idx]: customers){
     if(!pq.empty() && pq.top().first<a){
        int room = pq.top().second;
        pq.pop();
        pq.push({b,room});
        assigned[idx]=room;
     }else{
        cnt++;
        pq.push({b,cnt});
        assigned[idx]=cnt;
     }
   }
 cout << cnt << endl;
    for (int room : assigned)
        cout << room << ' ';
    cout << endl;

   
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

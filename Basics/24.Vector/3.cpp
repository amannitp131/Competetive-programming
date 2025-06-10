// https://www.hackerrank.com/challenges/cpp-lower-bound/problem


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
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int q;
   cin>>q;
   for(int i=0;i<q;i++){
    int query;
    cin>>query;
    auto lb= lower_bound(arr.begin(),arr.end(),query);
    if(arr[(lb-arr.begin())]==query){
        cout<<"Yes ";
    }else{
        cout<<"No ";
    }
    cout<<(lb-arr.begin())+1<<endl;
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

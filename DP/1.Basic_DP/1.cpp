#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

const int MOD = 1e9 + 7;

void recr(int n,int& ans,int sum,vector<int>& dp){
   if(sum==n){
    ans = (ans + 1) % MOD;
    return;
   }
   if(sum>n){
    return;
   }
   if (dp[sum] != -1) {
        ans = (ans + dp[sum]) % MOD;
        return;
    }

   int before = ans;
    recr(n, ans, sum + 1, dp);
    recr(n, ans, sum + 2, dp);
    recr(n, ans, sum + 3, dp);
    recr(n, ans, sum + 4, dp);
    recr(n, ans, sum + 5, dp);
    recr(n, ans, sum + 6, dp);
    dp[sum] = (ans - before + MOD) % MOD;


}
void solve() {
   int n,ans=0;
   cin>>n;
   vector<int> dp(n+1,-1);
   recr(n,ans,0,dp);
   cout<<ans<<endl;
   
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

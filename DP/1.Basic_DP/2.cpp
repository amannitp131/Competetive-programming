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


int recr(int n, int sum, vector<int>& arr, int temp, vector<int>& dp) {
    if (temp == sum) return 1;
    if (temp > sum) return 0;
    if (dp[temp] != -1) return dp[temp];
    int ways = 0;
    for (int i = 0; i < n; i++) {
        ways = (ways + recr(n, sum, arr, temp + arr[i], dp)) % MOD;
    }
    dp[temp] = ways;
    return ways;
}

void solve() {
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> dp(sum + 1, -1);
    int ans = recr(n, sum, arr, 0, dp);
    cout << ans << endl;
}

// dp[temp] = number of ways to reach 'sum' from current sum 'temp'
// Recurrence: dp[temp] = sum over all i (dp[temp + arr[i]])
// Base cases: dp[sum] = 1, dp[temp] = 0 for temp > sum

int main() {
    fast();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

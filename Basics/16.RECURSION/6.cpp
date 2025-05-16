// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

void recr(int n, vector<int>& arr) {
    if (n <= 0) return;
    if ((n-1) % 2 == 0) {
        cout << arr[n - 1] << " ";
    }
    recr(n - 1, arr);
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    recr(n,arr);
}





int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

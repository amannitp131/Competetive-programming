// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

void recr(int n) {
    if (n == 0) {
        return;
    }
    recr(n - 1);
    cout<<n<<endl;
}

void solve() {
    int n;
    cin >> n;
    recr(n);
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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

int recr(int n) {
    if(n==0 || n==1){
        return n;
    }
    return recr(n-1)+recr(n-2);
}

void solve() {
    int n;
    cin >> n;
    cout << recr(n-1) << endl;
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

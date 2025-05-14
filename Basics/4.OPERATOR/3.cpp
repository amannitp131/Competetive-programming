// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

// learned about fixed, setprecision
// 'fixed' is used to display floating point numbers in fixed-point notation.
// 'setprecision(n)' sets the number of digits to appear after the decimal point (when used with 'fixed').

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
    double R;
    cin >> R;
    cout << fixed << setprecision(9) << 3.141592653 * R * R << endl;
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

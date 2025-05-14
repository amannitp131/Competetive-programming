// https://vjudge.net/problem/Aizu-ITP1_3_D


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
    int a, b, c;
    cin >> a >> b >> c;

    set<int> divisors;
    for (int i = 1; i * i <= c; i++) {
        if (c % i == 0) {
            if (i >= a && i <= b) divisors.insert(i);
            int d = c / i;
            if (d != i && d >= a && d <= b) divisors.insert(d);
        }
    }
    cout << divisors.size() << endl;
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

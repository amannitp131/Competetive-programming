// https://www.hackerrank.com/contests/tlecc2/challenges/hinata-priority-queue

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
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        pq.push(k);
        if (pq.size() < 3) {
            cout << "-1" << endl;
        } else {
            int l = pq.top(); pq.pop();
            int m = pq.top(); pq.pop();
            int a = pq.top(); pq.pop();
            cout << 1LL * l * m * a << endl; 
            pq.push(a); pq.push(m); pq.push(l);
        }
    }
}

// Note about 1LL:
// In the expression '1LL * l * m * a', '1LL' is used to ensure that the multiplication is done using 64-bit integer arithmetic (long long).
// This prevents integer overflow that could occur if l, m, or a are large, since by default, multiplying int values results in int.
// By multiplying by 1LL (which is a long long literal), the entire expression is promoted to long long type.




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}

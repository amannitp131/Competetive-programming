// http://vjudge.net/problem/Aizu-ALDS1_3_B
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
    int n, q;
    cin >> n >> q;
    queue<pair<int, string>> que;

    for (int i = 0; i < n; i++) {
        int k;
        string s;
        cin >> s >> k; 
        que.push({k, s});
    }

    int t = 0;

    while (!que.empty()) {
        auto curr = que.front();
        que.pop();

        if (curr.first <= q) {
            t += curr.first;
            cout  << curr.second << " "  << t<< endl;
        } else {
            t += q;
            que.push({curr.first - q, curr.second});
        }
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

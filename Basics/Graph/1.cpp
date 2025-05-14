// https://vjudge.net/problem/Aizu-ALDS1_11_A
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
    vector<vector<int>> adj(n, vector<int>(n, 0)); // adjacency matrix

    for (int i = 0; i < n; i++) {
        int idx, num;
        cin >> idx >> num;
        idx--;
        for (int j = 0; j < num; j++) {
            int v;
            cin >> v;
            v--;
            adj[idx][v]++;
        }
    }

    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << adj[i][j];
        if (j != n - 1) cout << " ";
    }
    cout << endl;
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

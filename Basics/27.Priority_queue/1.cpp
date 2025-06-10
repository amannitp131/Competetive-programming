// https://vjudge.net/problem/Aizu-ALDS1_9_C

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
    priority_queue<int> pq;
    string s;
    while (getline(cin, s)) {
        if (s == "end") break;
        if (s == "extract") {
            cout << pq.top() << endl;
            pq.pop();
        } else {
            int idx = s.find(' ');
            string st = s.substr(idx + 1);
            pq.push(stoi(st));
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

// https://codeforces.com/problemset/problem/5/C

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
    string st;
    cin >> st;
    int n = st.size();
    vector<bool> valid(n, false);
    stack<int> stk;

    for (int i = 0; i < n; i++) {
        if (st[i] == '(') {
            stk.push(i);
        } else if (st[i] == ')') {
            if (!stk.empty()) {
                int j = stk.top(); stk.pop();
                valid[i] = true;
                valid[j] = true;
            }
        }
    }

    int maxLen = 0, count = 0, curr = 0;
    for (int i = 0; i < n; i++) {
        if (valid[i]) {
            curr++;
            if (curr > maxLen) {
                maxLen = curr;
                count = 1;
            } else if (curr == maxLen) {
                count++;
            }
        } else {
            curr = 0; 
        }
    }

    if (maxLen == 0) cout << "0 1"<<endl;
    else cout << maxLen << " " << count <<endl;
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

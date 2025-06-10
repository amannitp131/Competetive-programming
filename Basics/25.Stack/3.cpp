// https://cses.fi/problemset/task/1645
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
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans(n);
    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if(st.empty()) {
            ans[i] = 0;
        } else {
            ans[i] = st.top() + 1;
        }
        st.push(i);
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "\n";
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

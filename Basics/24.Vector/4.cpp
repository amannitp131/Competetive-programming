// // https://codeforces.com/problemset/problem/704/A

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// #define fast()                            \
//     {                                     \
//         ios_base::sync_with_stdio(false); \
//         cin.tie(0);                       \
//         cout.tie(0);                      \
//     }


// void solve() {
//     int n, k, sum = 0, lread = 0;
//     cin >> n >> k;
//     vector<int> arr(n, 0); 
//     vector<pair<int, int>> tnum; 

//     for (int i = 0; i < k; i++) {
//         int type, num;
//         cin >> type >> num;
//         if (type == 1) {
//             arr[num - 1]++;
//             sum++;
//             tnum.push_back({num - 1, 1});
//         } else if (type == 2) {
//             sum -= arr[num - 1];
//             arr[num - 1] = 0;
//             for (auto &notif : tnum) {
//                 if (notif.first == num - 1 && notif.second == 1) {
//                     notif.second = 0;
//                 }
//             }
//         } else {
//             for (; lread < num; lread++) {
//                 int app = tnum[lread].first;
//                 if (tnum[lread].second == 1) {
//                     tnum[lread].second = 0;
//                     arr[app]--;
//                     sum--;
//                 }
//             }
//         }
//         cout << sum << endl;
//     }
// }




// int main() {
//     fast();
//     int t;
//     t=1;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> cnt(n, 0);
    queue<int> q;
    int sum = 0, prev = 0;

    for (int i = 0; i < k; i++) {
        int type, num;
        cin >> type >> num;
        if (type == 1) {
            cnt[num - 1]++;
            sum++;
            q.push(num - 1);
        } else if (type == 2) {
            sum -= cnt[num - 1];
            cnt[num - 1] = 0;
        } else if (type == 3) {
            int left = num - prev;
            while (left > 0 && !q.empty()) {
                int curr = q.front();
                q.pop();
                if (cnt[curr] > 0) {
                    cnt[curr]--;
                    sum--;
                }
                left--;
            }
            prev = num;
        }
        cout << sum << endl;
    }

    return 0;
}

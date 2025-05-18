// https://codeforces.com/contest/727/problem/A


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

const int MAXN = 100005;
vector<int> adj[MAXN];   
bool visited[MAXN];      

void dfs(int u){
    visited[u]=true;
    for(int v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

vector<int> best_ans;
// recursive
// void recr(int a, int b, vector<int>& temp) {
//     if (a > b) return;
//     temp.push_back(a);
//     if (a == b) {
//         if (best_ans.empty() || temp.size() < best_ans.size()) {
//             best_ans = temp;
//         }
//         temp.pop_back();
//         return;
//     }
//     recr(a * 2, b, temp);
   
//     recr(a * 10 + 1, b, temp);
//      temp.pop_back();
    
    
// }

// void solve() {
//     int a, b;
//     cin >> a >> b;
//     best_ans.clear();
//     vector<int> temp;
//     recr(a, b, temp);
//     if (best_ans.empty()) {
//         cout << "NO"<<endl;
//     } else {
//         cout << "YES"<<endl << best_ans.size() << endl;
//         for (int x : best_ans) cout << x << " ";
//         cout << endl;
//     }
// }

void solve() {
    int a, b;
    cin >> a >> b;
    vector<int> ans;
    while (b >= a) {
        ans.push_back(b);
        if (b == a) break;
        if (b % 2 == 0) {
            b /= 2;
        } else if (b % 10 == 1) {
            b = (b - 1) / 10;
        } else {
            break;
        }
    }
    if (ans.back() != a) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (int x : ans) cout << x << " ";
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

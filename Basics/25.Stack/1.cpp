// https://vjudge.net/problem/EOlymp-6122
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
   vector<int> arr;
   while(true){
      string line;
      getline(cin, line);
      if(line.empty()) continue;
      stringstream ss(line);
      string cmd;
      ss >> cmd;
      if(cmd == "back") {
         if(arr.empty()) {
            cout << "error" << endl;
         } else {
            cout << arr.back() << endl;
         }
      } else if(cmd == "size") {
         cout << arr.size() << endl;
      } else if(cmd == "pop") {
         if(arr.empty()) {
            cout << "error" << endl;
         } else {
            cout << arr.back() << endl;
            arr.pop_back();
         }
      } else if(cmd == "clear") {
         cout << "ok" << endl;
         arr.clear();
      } else if(cmd == "exit") {
         cout << "bye" << endl;
         return;
      } else if(cmd == "push") {
         int x;
         if(ss >> x) {
            cout << "ok" << endl;
            arr.push_back(x);
         }
         // else ignore invalid push
      }
      // Ignore invalid commands
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

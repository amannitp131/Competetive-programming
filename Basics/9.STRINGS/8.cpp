// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

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
   string s;
   cin>>s;
   // The find() function searches the string for the first occurrence of the specified substring (here, an operator like '+', '-', '*', '/').
   // It returns the position (index) of the first character of the found substring.
   // If the substring is not found, find() returns string::npos.

   // string::npos is a constant static member value with the greatest possible value for an element of type size_t.
   // It is used to indicate that no matches were found by functions like find().
   size_t pos= s.find("+");
   if (pos == string::npos) {
     size_t pos= s.find("*");
    if (pos == string::npos) {
    size_t pos= s.find("-");
    if (pos == string::npos) {
    size_t pos= s.find("/");
    cout << stoi(s.substr(0, pos)) / stoi(s.substr(pos + 1)) << endl;
}else{
    cout << stoi(s.substr(0, pos)) - stoi(s.substr(pos + 1)) << endl;
}
}else{
     cout << stoi(s.substr(0, pos)) * stoi(s.substr(pos + 1)) << endl;
}

}else{
    cout << stoi(s.substr(0, pos)) + stoi(s.substr(pos + 1)) << endl;
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

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P


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
   /*
      Explanation:
      s[0] - '0' converts the first character of the string s (which is a digit character, e.g., '3')
      to its corresponding integer value (e.g., 3).
      This works because characters for digits are stored in consecutive order in ASCII/Unicode,
      so subtracting the character '0' from another digit character gives its integer value.
   */
   if((s[0]-'0')%2==0){
       cout<<"EVEN"<<endl;
   }else{
       cout<<"ODD"<<endl;
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

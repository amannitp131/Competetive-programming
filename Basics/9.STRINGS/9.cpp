// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G


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
   for(int i=0;i<s.length();i++){
    // In C++, characters are stored as their ASCII integer values.
    // You can directly compare a character with a number (e.g., s[i] >= 97) because 'a' has ASCII value 97.
    // You can also perform arithmetic operations on characters (e.g., s[i] - 32) to convert between cases.
    if(s[i]==','){
        s[i] = ' ';
    }else{
        if(s[i]>=97){ // checks if the character is lowercase (ASCII >= 97)
            s[i]=s[i]-32; // converts lowercase to uppercase by subtracting 32 from ASCII value
        }else{
             s[i]=s[i]+32; // converts uppercase to lowercase by adding 32 to ASCII value
        }
    }
   }
   cout<<s<<endl;
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

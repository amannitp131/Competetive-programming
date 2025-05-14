// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }

/*
    Note:
    We cannot use 'cin >> s' here because 'cin >> s' only reads input up to the first whitespace (space, tab, or newline).
    If the input string contains spaces or tabs before the '\' character, 'cin >> s' would not read the entire required part.
    'getline(cin, s)' reads the whole line including spaces, which is necessary for this problem.

    Explanation of string methods used:
    - s.find('\\'):
        Finds the position (index) of the first occurrence of the character '\' in the string s.
        Returns the index as a size_t value. If not found, returns string::npos.
        In this problem, it is guaranteed that '\' exists in the string.

    - s.substr(0, pos):
        Returns a substring of s starting from index 0 up to (but not including) index pos.
        This extracts the part of the string before the first '\' character.
*/

void solve() {
    string s;
    getline(cin, s);
    // Find the position of the first '\' character
    size_t pos = s.find('\\');
    // Print substring from start to position (not including '\')
    cout << s.substr(0, pos) << endl;
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

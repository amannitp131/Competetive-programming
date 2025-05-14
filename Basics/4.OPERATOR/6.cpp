// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

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
    This program reads four integers and calculates the product of these numbers,
    taking the last two digits of the result (i.e., modulo 100).
    The output is always formatted as a two-digit number, including leading zeros if necessary.

    The use of 'setw(2)' and 'setfill('0')' ensures that the output is always two characters wide,
    padding with '0' on the left if the number has only one digit.

    - setw(2): Sets the width of the next output field to 2 characters.
    - setfill('0'): Specifies that the fill character for padding is '0'.

    For example:
        If the product modulo 100 is 5, the output will be '05'.
        If the product modulo 100 is 42, the output will be '42'.
*/

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll prod = 1;
    prod = (prod * a) % 100;
    // as multiplication product can become too large so we reduce size to 2 each time
    prod = (prod * b) % 100;
    prod = (prod * c) % 100;
    prod = (prod * d) % 100;
    cout << setw(2) << setfill('0') << prod << endl;
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

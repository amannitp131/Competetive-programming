/*
    lower_bound and upper_bound in C++

    - Both are STL algorithms used with sorted containers (like vector).
    - lower_bound(v.begin(), v.end(), x):
        Returns iterator to the first element >= x.
    - upper_bound(v.begin(), v.end(), x):
        Returns iterator to the first element > x.

    Example:
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 4, 5, 7, 9};
    int x = 4;

    // lower_bound
    auto lb = lower_bound(v.begin(), v.end(), x);
    if(lb != v.end())
        cout << "lower_bound of " << x << " is at index " << (lb - v.begin()) << ", value: " << *lb << endl;
    else
        cout << "lower_bound not found\n";

    // upper_bound
    auto ub = upper_bound(v.begin(), v.end(), x);
    if(ub != v.end())
        cout << "upper_bound of " << x << " is at index " << (ub - v.begin()) << ", value: " << *ub << endl;
    else
        cout << "upper_bound not found\n";

    // Demonstrate for a value not in vector
    x = 6;
    lb = lower_bound(v.begin(), v.end(), x);
    ub = upper_bound(v.begin(), v.end(), x);
    cout << "For x = 6, lower_bound index: " << (lb - v.begin()) << ", upper_bound index: " << (ub - v.begin()) << endl;

    return 0;
}

/*
    C++ Vector Explanation and Common Functions

    - std::vector is a dynamic array provided by the C++ STL.
    - It can grow or shrink in size automatically.
    - Common functions:
        - push_back(x): Adds element x at the end.
        - pop_back(): Removes the last element.
        - size(): Returns the number of elements.
        - sort(v.begin(), v.end()): Sorts the vector.
        - erase(pos): Removes element at position 'pos'.
        - erase(start, end): Removes elements in the range [start, end).
        - insert(pos, x): Inserts x at position 'pos'.
        - clear(): Removes all elements.
        - v[i] or at(i): Access element at index i.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // Adding elements
    v.push_back(5);
    v.push_back(2);
    v.push_back(8);
    v.push_back(1);

    cout << "Initial vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // Sorting
    sort(v.begin(), v.end());
    cout << "After sort: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // Erase element at index 1
    v.erase(v.begin() + 1);
    cout << "After erase at index 1: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // Insert 10 at index 1
    v.insert(v.begin() + 1, 10);
    cout << "After insert 10 at index 1: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // Pop back
    v.pop_back();
    cout << "After pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // Accessing elements
    cout << "Element at index 0: " << v[0] << endl;
    cout << "Element at index 1 (using at()): " << v.at(1) << endl;

    // Size
    cout << "Size of vector: " << v.size() << endl;

    // Clear
    v.clear();
    cout << "After clear, size: " << v.size() << endl;

    return 0;
}

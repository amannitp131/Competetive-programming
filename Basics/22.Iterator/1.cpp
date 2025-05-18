#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
#include <iterator>
using namespace std;

int main() {
    // 1. Input Iterator (istream_iterator)
    cout << "Input Iterator (Enter 2 numbers): ";
    istream_iterator<int> input_itr(cin);
    int a = *input_itr; ++input_itr;
    int b = *input_itr;
    cout << "You entered: " << a << " and " << b << endl;

    // 2. Output Iterator (ostream_iterator)
    // Used to write elements to an output stream (like cout).
    // Here, it prints all elements of vector v separated by space.
    cout << "Output Iterator: ";
    vector<int> v = {10, 20, 30};
    ostream_iterator<int> output_itr(cout, " ");
    copy(v.begin(), v.end(), output_itr);
    cout << endl;

    // 3. Forward Iterator (forward_list)
    // Can move only forward, one step at a time.
    // Used here to print all elements of a forward_list.
    forward_list<int> fl = {1, 2, 3};
    cout << "Forward Iterator: ";
    for (forward_list<int>::iterator it = fl.begin(); it != fl.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 4. Bidirectional Iterator (list)
    // Can move both forward and backward.
    // Used here to print list elements from start to end and end to start.
    list<int> lst = {4, 5, 6};
    cout << "Bidirectional Iterator (forward): ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Bidirectional Iterator (backward): ";
    for (list<int>::reverse_iterator rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // 5. Random Access Iterator (vector)
    // Can jump to any element directly using arithmetic.
    // Used here to access first, third, and last elements of a vector.
    vector<int> vec = {7, 8, 9, 10};
    cout << "Random Access Iterator: ";
    vector<int>::iterator it = vec.begin();
    cout << "First: " << *it << ", ";
    cout << "Third: " << *(it + 2) << ", ";
    cout << "Last: " << *(vec.end() - 1) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;

    // push() - Add elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // top() - Access the top element
    cout << "Top element: " << s.top() << endl; // 30

    // size() - Number of elements in the stack
    cout << "Size: " << s.size() << endl; // 3

    // empty() - Check if the stack is empty
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl; // No

    // pop() - Remove the top element
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 20

    // More pops
    s.pop();
    s.pop();

    // Now stack is empty
    cout << "Is empty after pops? " << (s.empty() ? "Yes" : "No") << endl; // Yes

    // Note: No direct way to clear stack, but you can pop until empty
    // No direct way to access elements other than top

    return 0;
}

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // 1. Max-heap (default)
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    cout << "Max-heap (default): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " "; // prints 20 10 5
        maxHeap.pop();
    }
    cout << endl;

    // 2. Min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Min-heap: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // prints 5 10 20
        minHeap.pop();
    }
    cout << endl;

    // 3. Custom comparator (for pairs)
    typedef pair<int, int> pii;
    struct CompareSecond {
        bool operator()(const pii& a, const pii& b) {
            return a.second > b.second; // min-heap by second element
        }
    };
    priority_queue<pii, vector<pii>, CompareSecond> pq;
    pq.push({1, 100});
    pq.push({2, 50});
    pq.push({3, 200});

    cout << "Custom comparator (min-heap by second): ";
    while (!pq.empty()) {
        cout << "(" << pq.top().first << "," << pq.top().second << ") ";
        pq.pop();
    }
    cout << endl;

    // 4. Basic operations
    priority_queue<int> pq2;
    pq2.push(15);
    pq2.push(30);
    pq2.push(25);

    cout << "Top element: " << pq2.top() << endl; // 30
    cout << "Size: " << pq2.size() << endl; // 3
    pq2.pop();
    cout << "After pop, top: " << pq2.top() << endl; // 25

    // 5. Build from array/vector
    vector<int> arr = {7, 2, 9, 4};
    priority_queue<int> pq3(arr.begin(), arr.end());
    cout << "Build from vector: ";
    while (!pq3.empty()) {
        cout << pq3.top() << " ";
        pq3.pop();
    }
    cout << endl;

    return 0;
}

/*
Summary:
- priority_queue is a heap-based container adapter.
- By default, it's a max-heap (largest element at top).
- Use greater<T> for min-heap.
- Custom comparators allow complex ordering.
- Supports push(), pop(), top(), size(), empty().
*/

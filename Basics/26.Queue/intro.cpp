#include <iostream>
#include <vector>
using namespace std;

// Queue using vector
class VectorQueue {
    vector<int> v;
public:
    void push(int x) { v.push_back(x); } // Enqueue
    void pop() { if (!v.empty()) v.erase(v.begin()); } // Dequeue
    int front() { return v.front(); }
    int back() { return v.back(); }
    int size() { return v.size(); }
    bool empty() { return v.empty(); }
};

// Queue using array (circular queue)
class ArrayQueue {
    int arr[100];
    int frontIdx, rearIdx, count;
public:
    ArrayQueue() : frontIdx(0), rearIdx(0), count(0) {}
    void push(int x) { // Enqueue
        if (count == 100) { cout << "Queue Full\n"; return; }
        arr[rearIdx] = x;
        rearIdx = (rearIdx + 1) % 100;
        count++;
    }
    void pop() { // Dequeue
        if (count == 0) { cout << "Queue Empty\n"; return; }
        frontIdx = (frontIdx + 1) % 100;
        count--;
    }
    int front() { return arr[frontIdx]; }
    int back() { return arr[(rearIdx + 99) % 100]; }
    int size() { return count; }
    bool empty() { return count == 0; }
};

int main() {
    VectorQueue vq;
    ArrayQueue aq;

    // Demonstrate vector queue
    vq.push(10);
    vq.push(20);
    cout << "VectorQueue Front: " << vq.front() << endl;
    cout << "VectorQueue Back: " << vq.back() << endl;
    vq.pop();
    cout << "VectorQueue Front after pop: " << vq.front() << endl;

    // Demonstrate array queue
    aq.push(30);
    aq.push(40);
    cout << "ArrayQueue Front: " << aq.front() << endl;
    cout << "ArrayQueue Back: " << aq.back() << endl;
    aq.pop();
    cout << "ArrayQueue Front after pop: " << aq.front() << endl;

    return 0;
}

/*
Queue Functions:
- push(x): Add element x to the back of the queue.
- pop(): Remove element from the front of the queue.
- front(): Get the front element.
- back(): Get the last element.
- size(): Number of elements in the queue.
- empty(): Check if the queue is empty.
*/
#include <iostream>
#include <queue>
using namespace std;

void priorityQueueDemo() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Top element: " << pq.top() << endl;
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;
    cout << "Priority queue size: " << pq.size() << endl;
    // Using min-heap
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(100);
    minheap.push(30);
    minheap.push(20);
    cout << "Min-heap top element: " << minheap.top() << endl;  
}

int main() {
    priorityQueueDemo();
    return 0;
}


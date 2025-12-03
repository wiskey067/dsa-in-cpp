#include<iostream>
#include<queue>
using namespace std;

void queueDemo() {
    queue <int> q;
    q.push(10); // enqueue 10
    q.push(20); // enqueue 20
    cout << "Front element: " << q.front() << endl; // get front element
    q.pop(); // dequeue front element
    cout << "Front element after pop: " << q.front() << endl; // get front element after pop
    cout << "Queue size: " << q.size() << endl; // get size of the queue
}
int main() {
    queueDemo();
    return 0;
} 
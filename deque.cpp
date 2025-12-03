#include <iostream>
#include <deque>
using namespace std;

void explaindeque() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.emplace_back(20);
    dq.emplace_front(2);
    dq.insert(dq.begin() + 1, 15); // inserts 15 at index 1
    dq.erase(remove(dq.begin(), dq.end(), 10), dq.end()); // removes all occurrences of 10
    cout << "Deque elements: ";
    for (int x : dq) cout << x << " ";
    cout << "\n";
}

int main() {
    explaindeque();
    return 0;
}
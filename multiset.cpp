#include <iostream>
#include <set>
using namespace std;

void multisetDemo(){
    multiset<int> ms; // ordered multiset storing elements in sorted order, allows duplicates
    ms.insert(10); // insert element
    ms.emplace(20); // more efficient than insert
    ms.insert(10); // duplicate, will be added
    cout << "Multiset elements: ";
    for (int x : ms) cout << x << " ";
    cout << "\nAfter erasing one occurrence of 10, Multiset elements: ";
    ms.erase(ms.find(10)); // remove one occurrence of element
    for (int x : ms) cout << x << " ";
    cout << "\nCount of 10 in multiset: " << ms.count(10) << endl;
    cout << "Size of multiset: " << ms.size() << endl;
    auto it = ms.find(20); // find element
    if (it != ms.end()) {
        cout << "Found element: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
}
    int main() {
        multisetDemo();
        return 0;
    }
#include <iostream>
#include <set>
using namespace std;

void explainset(){
    set<int> s; // ordered set storing unique elements in sorted order
    s.insert(10); // insert element
    s.emplace(20); // more efficient than insert
    s.insert(10); // duplicate, will not be added
    cout << "Set elements: ";
    for (int x : s) cout << x << " ";
    cout << "\nAfter erasing 10, Set elements: ";
    s.erase(10); // remove element
    for (int x : s) cout << x << " ";
    cout << "\nSet contains 20: " << (s.count(20) ? "Yes" : "No") << endl;
    cout << "Size of set: " << s.size() << endl;
    auto it = s.find(20); // find element
    if (it != s.end()) {
        cout << "Found element: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
    int cnt = s.count(20); // count occurrences of 20 if not present returns 0 else 1 
    cout << "Count of 20 in set: " << cnt << endl;

    auto itlow = s.lower_bound(15); // first element not less than 15
    auto itup = s.upper_bound(25); // first element greater than 25
    if (itlow != s.end()) {
        cout << "Lower bound of 15: " << *itlow << endl;
    } else {
        cout << "No lower bound found for 15" << endl;
    }
    if (itup != s.end()) {
        cout << "Upper bound of 25: " << *itup << endl;
    } else {
        cout << "No upper bound found for 25" << endl;
    }
}
    int main() {
        explainset();
        return 0;
    }
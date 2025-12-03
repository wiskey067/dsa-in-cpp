#include<iostream>
#include<unordered_set>
using namespace std;

void explainunorderset(){
    unordered_set<int> us;  //lower_bound and upper_bound function does not works, rest all functions are same as above, it does not stores in any particular order it has a better complexity
    us.insert(10);
    us.emplace(20);
    us.insert(10); // duplicate, will not be added
    cout << "Unordered Set elements: ";
    for (int x : us) cout << x << " ";
    cout << "\nAfter erasing 10, Unordered Set elements: ";
    us.erase(10);
    for (int x : us) cout << x << " ";
    cout << "\nUnordered Set contains 20: " << (us.count(20) ? "Yes" : "No") << endl;
    cout << "Size of Unordered Set: " << us.size() << endl;
    auto it = us.find(20);
    if (it != us.end()) {
        cout << "Found element: " << *it << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

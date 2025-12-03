#include <iostream>
#include <list>
using namespace std;

void explainlist() {
   // Creating a list of integers 
    list<int> lst; // doubly linked list
    lst.push_back(10); // adding element at the end
    lst.emplace_back(20); // more efficient than push_back
    cout << "List elements: ";
    for (int x : lst) cout << x << " ";
    lst.push_front(5); // adding element at the front
    cout << "\nAfter push_front(5), List elements: ";
    for (int x : lst) cout << x << " ";
    lst.emplace_front(2); // more efficient than push_front
    cout << "\nAfter emplace_front(2), List elements: ";
    for (int x : lst) cout << x << " ";
    list<int> lst2 (3,100); // list of size 3 with all
                            // values as 100
    cout << "\nList lst2 elements: ";
    for (int x : lst2) cout << x << " ";
    list<int> lst3 (lst2); // copy lst2 to lst3
    cout << "\nList lst3 elements (copied from lst2): ";
    
}
int reverselinkedlist(list<int>& lst) {
    lst.reverse(); // reverses the list
    return 0;
}
int main() {
    explainlist();
    list<int> mylist = {1, 2, 3, 4, 5};
    reverselinkedlist(mylist);
    cout << "Reversed list elements: ";
    for (int x : mylist) cout << x << " ";
    return 0;
}
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;

};
class LinkedList {
private:
    node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    

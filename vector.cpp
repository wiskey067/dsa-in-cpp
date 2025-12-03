#include <iostream>
#include <vector>
using namespace std;

void explainvector() {
    // Creating a vector of integers
    vector<int> vec; // dynamic array
    vec.push_back(10); // adding element at the end
    vec.emplace_back(20); // more efficient than push_back
    cout << "Vector elements: ";
    vector< pair <int,int>> vecp ; // vector of Pairs
     vecp.push_back({1,2});
        vecp.emplace_back(3,4); // doesnt require {}
    vector<int> vec2 (5,100); // vector of size 5 with all values 100
    vector<int> vec3 (vec2); // copy vec2 to vec3
    vector<int> vec4 = {1, 2, 3, 4, 5};
    cout << "\nVector vec4 elements: ";
    for (int x : vec4) cout << x << " ";
    vector<int>::iterator it = vec3.begin(); // iterator to the beginning in the memory
    vector<int>::iterator itend = vec3.end(); // iterator to the end in the memory
    vector<int>::iterator itmid= it + 2; // iterator to the 3rd element
    vector<int>::reverse_iterator itlast = vec3.rbegin(); // iterator in reverse to the last element
    vector<int>::reverse_iterator itlastend = vec3.rend(); // iterator in reverse to before first element
    cout << "\nIterating through vec3: ";
    for (auto it = vec3.begin(); it != vec3.end(); ++it) // auto keyword automatically detects the datatype
    {
        cout << *it << " ";
    }
    vec3.erase(vec3.begin() + 1); // removes element at index 1
    cout << "\nAfter erasing index 1, vec3 elements: ";
    for (auto it: vec3) // range based for loop
    {
        cout << it << " ";
    }
    vec3.insert(vec3.begin() + 1, 150); // inserts 150 at index 1
    vec3.swap(vec4); // swaps vec3 and vec4
    vec3.clear(); // clears the vector
    cout << "\nFirst element of vec4: " << vec4.front();
    cout << "\nLast element of vec4: " << vec4.back();
    cout << "\nElement at index 2 of vec4: " << vec4.at(2);
    cout << "\nSize of vec4: " << vec4.size();  

    cout << endl;
}
    int main() {
        explainvector();
        return 0;
    }
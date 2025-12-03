#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(const vector<int>& path) {
    int left = 0;
    int right = path.size() - 1;
    while (left < right) {
        if (path[left] != path[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
    
int main() {
    vector<int> path;
    int n, value;
    cout << "Enter number of elements in the path: ";
    cin >> n;
    cout << "Enter the elements of the path: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        path.push_back(value);
    }
    if (isPalindrome(path)) {
        cout << "The path is a palindrome." << endl;
    } else {
        cout << "The path is not a palindrome." << endl;
    }
    return 0;
}
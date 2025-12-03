#include <iostream>
#include <string>
using namespace std;
 int palindrome(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
 }

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (palindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;

    int rev = reverse(n);
    cout << "Reversed: " << rev << endl;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (i + rev == n) {
            cout << "The indices are " << i << " and " << rev << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No such indices found" << endl;
    }
}
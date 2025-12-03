#include <iostream>
#include <string>
using namespace std;

bool palindromenum(int n) {
    if (n < 0) return false;
    long long rev=0, t=n;
    while (t) { rev = rev*10 + t%10; t /= 10; }
    return rev == n;
}
int main() {
    int n;
    if (!(cin >> n)) return 0;
    if (palindromenum(n)) {
        cout << n << " is a palindrome";
    } else {
        cout << n << " is not a palindrome";
    }
    return 0;
}
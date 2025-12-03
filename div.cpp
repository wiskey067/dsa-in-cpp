#include <iostream>
using namespace  std;

bool prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    if (!(cin >> num)) return 0;
    if (prime(num)) {
        cout << "the number is a prime number";
    } else {
        cout << "number is not a prime number";
    }
    return 0;
}
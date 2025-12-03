#include <iostream>
using namespace std;

int carry(int num1, int num2, int carry, int count) {
    while (num1 > 0 || num2 > 0) {
        int sum = num1 % 10 + num2 % 10 + carry;
        if (sum >= 10) {
            carry = 1;
            count++;
        } else {
            carry = 0;
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    return count;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int result = carry(num1, num2, 0, 0);
    cout << "Number of carry operations: " << result << endl;
    return 0;
}
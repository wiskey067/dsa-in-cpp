#include <iostream>
using namespace std;


class Solution {
public:
    int addDigits(int num) {
        while (num>=10){
            int sum=0;
            while(num>0){
             sum += num%10; 
            num/=10;
        } 
        num=sum;

    }
    return num;
}
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    int result = sol.addDigits(num);
    cout << "The result after repeatedly adding digits is: " << result << endl;
    return 0;
}
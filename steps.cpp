#include <iostream>
#include <unordered_map>
using namespace std;

class steps{
    public:
int minSteps(int n, unordered_map<int, int> &memo) {
 
    if (n == 1) return 0;

    if (memo.count(n)) return memo[n];

    int steps = 1 + minSteps(n - 1, memo);

    if (n % 2 == 0) {
        steps = min(steps, 1 + minSteps(n / 2, memo));
    }

    if (n % 3 == 0) {
        steps = min(steps, 1 + minSteps(n / 3, memo));
    }

    memo[n] = steps;
    return steps;
}

int minSteps(int n) {
    unordered_map<int,int> memo;
    return minSteps(n, memo);
}
};


int main() {
    steps s;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = s.minSteps(n);
    cout << "Minimum steps to reduce " << n << " to 1: " << result << endl;
    return 0;
}
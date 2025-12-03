#include <iostream>
using namespace std;

int pattern(int n) {
    int i, j;
    for ( i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // stars
        for ( j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
    return 0;
}

int main() {
    int n,t,i;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for(i=0;i<t;i++) {
        cout << "Enter the number of rows: ";
        cin >> n;
        pattern(n);
    }
    return 0;
}

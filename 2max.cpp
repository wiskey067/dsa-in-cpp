#include <iostream>
#include <stdexcept> // for invalid_argument
#include <climits>  // for INT_MIN
using namespace std;

class max2 {
public:
    int findSecondMax(int arr[], int n) {
        if (n < 2) {
            throw invalid_argument("Array must contain at least two elements");
        }

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max1) {
                max2 = max1;   // previous max becomes second max
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1) {
                max2 = arr[i];
            }
        }

        if (max2 == INT_MIN) {
            throw invalid_argument("No distinct second maximum value found");
        }

        return max2;
    }
};

int main() {
    max2 m;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    try {
        int secondMax = m.findSecondMax(arr, n);
        cout << "The second maximum value in the array is: " << secondMax << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }

    delete[] arr;
    return 0;
}
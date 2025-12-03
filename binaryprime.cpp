#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}


bool binarySearch(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    sort(arr.begin(), arr.end());


    cout << "\nPrime numbers in the array: ";
    vector<int> primes;
    for (int num : arr) {
        if (isPrime(num)) {
            cout << num << " ";
            primes.push_back(num);
        }
    }

    if (primes.empty()) {
        cout << "\nNo prime numbers found.\n";
        return 0;
    }

    
    int key;
    cout << "\n\nEnter a number to search: ";
    cin >> key;

    if (binarySearch(primes, key))
        cout << key << " is a prime number and is present in the array.\n";
    else
        cout << key << " is not found among the primes in the array.\n";

    return 0;
}
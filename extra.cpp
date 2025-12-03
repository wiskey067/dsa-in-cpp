#include<iostream>
#include<algorithm>
using namespace std;

void extraDemo(){
    cout << "This is an extra demo function." << endl;
    // Example array to demonstrate sorting
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n); // Using C++ standard library sort
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr + n, greater<int>()); // Sorting in descending order
    cout << "Sorted array in descending order: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    unsigned long long num = 7894954964;
    int cnt = __builtin_popcountll(num); // Count set bits in 64-bit value
    int cnt_upper = __builtin_popcountll(num >> 32); // Count set bits in upper 32 bits
    cout << "Number of set bits in " << num << " is: " << cnt << " (lower/total)" << endl;
    cout << "Number of set bits in upper 32 bits: " << cnt_upper << endl;

    string str = "Hello, World!";
    // Sorting and generating permutations of a 13-character string will produce 13! (~6.2M) permutations
    // which is why the program may appear to "hang" — it's actually printing millions of lines.
    // To avoid that, only print a limited number of permutations (change `permLimit` as needed).
    sort(str.begin(), str.end());
    const int permLimit = 120; // print at most this many permutations
    int printed = 0;
    do {
        cout << str << endl;
        printed++;
        if(printed >= permLimit){
            cout << "...stopped after " << printed << " permutations (limit reached)" << endl;
            break;
        }
    } while(next_permutation(str.begin(), str.end()));
}

int main() {
    extraDemo();
    return 0;
}
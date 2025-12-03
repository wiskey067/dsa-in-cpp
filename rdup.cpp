#include <iostream>
#include <unordered_set>
using namespace std;

class rdup {
public:
      void rdupe(int arr[], int &n){
        int j = 0;
        unordered_set<int> seen;
        for(int i = 0; i < n; i++){
            if(seen.find(arr[i]) == seen.end()){
                arr[j] = arr[i];
                seen.insert(arr[i]);
                j++;
            }
        }
        n = j;
      }

};

int main(){
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    rdup remover;
    remover.rdupe(arr, n);

    cout << "Array after removing duplicates:" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
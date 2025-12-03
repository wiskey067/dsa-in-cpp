#include <iostream>
#include <vector>
using namespace std;

vector<int> dupe(const vector<int>& arr){
	vector<int> arr2;
	arr2.reserve(arr.size());
	for(size_t i = 0; i < arr.size(); ++i){
		bool duplicate = false;
		for(size_t j = 0; j < arr2.size(); ++j){
			if (arr[i] == arr2[j]) {
				duplicate = true;
				break;
			}
		}
		if(!duplicate){
			arr2.push_back(arr[i]);
		}
	}
	return arr2;
}

int main(){
	int n;
	cout << "enter length of arr: ";
	if(!(cin >> n) || n <= 0){
		cerr << "Invalid length\n";
		return 1;
	}
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cout << "enter element " << i << ": ";
		cin >> arr[i];
	}
	vector<int> uniques = dupe(arr);
	cout << "Unique elements (" << uniques.size() << "): ";
	for(int v : uniques) cout << v << " ";
	cout << "\n";
	return 0;
}
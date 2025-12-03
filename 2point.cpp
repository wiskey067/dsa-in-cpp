#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> threesum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());  

        for (int i = 0; i < n - 2; i++) // fix the first element and goes trough the first element except last two 
        {
            int l = i + 1, r = n - 1; // two pointers one after i and one at the end

            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == target) {
                    return {i, l, r}; // found a triplet
                } else if (sum < target) {
                    l++;
                } else {
                    r--;
                }
            }
        }
        return {};
    }
};

int main() {
    cout << "enter target: ";
    int target;
    cin >> target;

    cout << "enter numbers (end with -1): ";
    vector<int> nums;
    int num;
    while (cin >> num && num != -1) {
        nums.push_back(num);
    }

    Solution s;
    auto result = s.threesum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << " " << result[2] << endl;
    } else {
        cout << "no solution found";
    }

    return 0;
}
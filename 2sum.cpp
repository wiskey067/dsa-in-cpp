#include <iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> twosum (vector<int>&nums, int target){
        int  n = nums.size();
         for(int i = 0 ;i<n;i++){
            for(int j = i+1; j<n;j++){
            if(target==nums[i]+nums[j]){
                return{i,j};
            }
            }
         } return{};
    } 
};

int main(){
    int target;
    vector<int> nums;
    cout<<"enter target: ";
    cin>>target;
    cout<<"enter numbers (end with -1): ";
    int num;
    while(cin>>num && num!=-1){
        nums.push_back(num);
        if(num==0){
            break;
        }
    }
  solution s;
  vector<int> result = s.twosum(nums,target);
    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" "<<result[1]<<endl;
    } else {
        cout<<"No two sum solution found."<<endl;
    }
   
}
#include <iostream>
using namespace std;
#include <vector>
#include <climits>  // for INT_MIN
int secondmax(int a[],int n){
    int max1=INT_MIN, max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]!=max1){
            max2=a[i];
        }
    }
    if(max2==INT_MIN){
        throw invalid_argument("No distinct second maximum value found");
    }
    return max2;
}
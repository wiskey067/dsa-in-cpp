#include<iostream>
using namespace std;
#include<vector>

int diff(int a[], int n){
    int odd_count=0, even_count=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) even_count++;
        else odd_count++;
    }
    return abs(odd_count - even_count);
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Odd elements are: ";
    for(int i=0;i<n;i++){
        if(a[i]%2!=0) cout<<a[i]<<" ";
    }
    cout<<endl<<"Even elements are: ";
    for(int i=0;i<n;i++){
        if(a[i]%2==0) cout<<a[i]<<" ";
    }
    cout<<endl<<"Difference between odd and even counts is: "<<diff(a.data(), n)<<endl;
    return 0;
}

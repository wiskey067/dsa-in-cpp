#include<iostream>
using namespace std;
#include<vector>
int unique(vector<int> &a){
    int x=0;
    for(int v : a ) x^=v;
    return x;
}

int main(){
    int n;
    vector<int> a(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=unique(a);
    cout<<"The unique element is: "<<result<<endl;
    return 0;
}
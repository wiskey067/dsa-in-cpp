#include <iostream>
using namespace std;

int star(int n) {
    int i,j ;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
    }
        for(j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
      
}
 return 0;
 }

int main() { 
    int n,t,i;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for(i=0;i<t;i++) {
        cout << "Enter the number of rows: ";
        cin >> n;
        star(n);
    }
    return 0;
}

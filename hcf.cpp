#include <iostream>
using namespace  std;

int hcf(int num1 ,int num2) {
    int ques = 1;
    for(int i=0;i<min(num1,num2);i++){
        if(num1%i==0&&num2%i==0){
             ques = i;
        }

    }
       return ques ;
}

int main() {
    int num1, num2;
    cin>>num1>>num2 ;
    int result = hcf(num1,num2);
    cout<<result;
}
#include<iostream>
using namespace  std;


int armstrong (int num){
   int sum = 0;
   int temp = 0;
     temp = num ;
    while(temp>0){
    int  d = temp%10;
     sum = sum + (d*d*d);
    temp/=10;
    
    
    }
if(sum==num){
    cout<<"its a armstrong number";
}
else{
    cout<<"not a armstrong number";
}
 return 0;
}

int main(){
    int num;
    cin>>num;
    armstrong(num);
}
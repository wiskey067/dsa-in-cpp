#include<iostream>
using namespace std;
#include<algorithm>
#include<string>

    int permutation(){
        string str = "ABC";
        sort(str.begin(), str.end());
        do{
            cout << str << endl;
        }while(next_permutation(str.begin(), str.end()));
        return 0;
    }

    int main(){
        permutation();
        return 0;
    }
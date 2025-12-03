#include<iostream>
using namespace std;
#include<cstring>



int rdupestring(char str[]){
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != str[j]) {
            j++;
            str[j] = str[i];
        }
    }
    str[j + 1] = '\0';
    return j + 1;
};

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int newLength = rdupestring(str);

    cout << "String after removing duplicates: " << str << endl;
    cout << "New length of the string: " << newLength << endl;

    return 0;
}
#include <iostream>

using namespace std;

void pairDemo() {
pair <int,int> p ={10,30};
cout <<p.first<<" "<<p.second<<endl;
pair <int,pair<int,int>> p1={10,{20,30}};
cout <<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
pair <int,int> arr[]={{1,2},{3,4},{5,6}};

cout <<arr[1].second<<endl;
}
int main() {
    pairDemo();
    return 0;
}
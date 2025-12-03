#include<iostream>
#include<map>
using namespace std;
void hashmapDemo(){
    // simple map
    map<int,int> mp; 
    mp[1] = 10;
    mp.emplace(2,20);

    cout << "Map elements: ";
    for(auto &p : mp) cout << p.first << "->" << p.second << " ";
    cout << "\nAfter erasing key 1, Map elements: ";

    mp.erase(1);

    for(auto &p : mp) cout << p.first << "->" << p.second << " ";
    cout << "\nSize of map: " << mp.size() << endl;

    auto it = mp.find(2);
    if(it != mp.end()){
        cout << "Found key 2 with value: " << it->second << endl;
    } else {
        cout << "Key not found" << endl;
    }

    // map with pair as value
    map<int,pair<int,int>> mp2;
    mp2[1] = {10,20};
    mp2[2] = {30,40};

    cout << "\nMap with pair as value:\n";
    for(auto &p : mp2){
        cout << p.first << " -> (" << p.second.first << ", " << p.second.second << ")\n";
    }

    // map with pair as key
    map<pair<int,int>,int> m;
    m[{1,2}] = 100;
    m[{3,4}] = 200;

    cout << "\nMap with pair as key:\n";
    for(auto &p : m){
        cout << "(" << p.first.first << ", " << p.first.second << ") -> " << p.second << endl;
    }

    cout << endl;
}
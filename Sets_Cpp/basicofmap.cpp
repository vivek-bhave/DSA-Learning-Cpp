#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<string,int> m;

    pair<string,int> p1;
    p1.first = "Vivek"; // key
    p1.second = 23; // value

    pair<string,int> p2;
    p2.first = "Avijit";
    p2.second = 34;

    pair<string,int> p3;
    p3.first = "Sonu";
    p3.second = 28;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    m["Sathyavati"] = 21; // Second way to insert in map
    m.erase("Sonu"); //deletion 
    // for(pair<string,int> p:m) {
    //     cout << p.first << " " << p.second << endl;
    // }

    // Both auto and pair<string,int> p are equivalent.
    for(auto p:m) {
        cout << p.first << " " << p.second << endl;
     }
}
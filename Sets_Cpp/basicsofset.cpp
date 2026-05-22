#include<iostream>>
#include<unordered_set>>

using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(8);
    s.insert(8); 
    cout << s.size() << endl; //  8 inserted twice still the size of set is 5 because Set doesn't take duplicate values

    s.insert(9);
    s.erase(9); // removes element from set
    
    int target = 8;

    //s.find() searches target randomly in set if it does not find target it returns last element of set

    if(s.find(target)!=s.end()){//
        cout << target <<" exists in set" << endl;
    }
    else cout << "Does not exist" << endl;

    //for each loop to print set 
    for(int ele: s){
        cout << ele << " ";
    }
}
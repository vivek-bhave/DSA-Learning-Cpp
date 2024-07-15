#include<iostream>
#include<vector>
using namespace std;
int main(){
    //capacity is the number of elements a vector can Hold.
    //size the the number of elements in vector
    vector <int> v; //Declaration (capacity: 0 , Size: 0)
    v.push_back(4);//Insertion
    v.push_back(3);//Pushback doubles vector's intial capacity/Size  (capacity: 1 , Size: 2)
    v.push_back(4); // (capacity: 4 , Size: 3)
    v[1] = 7; // Updation of first element
    cout<< v[0]<<" ";//Output
    cout<< v[1]<<" ";
    cout<< v[2] <<" ";
     cout<< v[3]<<" ";
}






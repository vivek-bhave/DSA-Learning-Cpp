#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Capacity is the number of elements a vector can Hold.
    //Size is the the number of elements in vector.
    vector <int> v; //Declaration (capacity: 0 , Size: 0)
    v.push_back(4);//Insertion  (capacity: 1 , Size: 1, Index: 0)
    v.push_back(3);//Pushback doubles vector's intial capacity (capacity: 2 , Size: 2 ,Index: 1)
    v.push_back(4); // (capacity: 4 , Size: 3, Index: 2)
    cout<<"Intial value: "<< v[1] <<endl; //v[Index no.] = Output
    v[1] = 7; // Updation of first element
    cout<<"Updated Value: "<< v[1] <<endl;
     //Output through loop
     for(int i=0;i<=2;i++){
     cout<<v[i]<<" ";}
}






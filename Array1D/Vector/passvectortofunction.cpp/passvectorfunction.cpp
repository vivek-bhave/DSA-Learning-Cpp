#include<iostream>
#include<vector>
using namespace std;
void address2(vector<int> v){ // v without & creates a new copy vector with value of same size,value,capacity
    cout<<"Address of Copy object 2 : "<< &v <<endl;
    cout<<"Value at 0th index 2 : " << v[0]<<endl;
    cout<<"Size 2 : "<<v.size()<<endl;
    cout<<"Capacity 2 : "<<v.capacity()<<endl;
    
}   

void address1(vector<int>&v){ // &v passes original vector so use mostly &v
    cout<<"Address of Orginal object 1 : "<< &v <<endl;// add. is still same
    cout<<"Value at 0th index 1 : " << v[0]<<endl;
    cout<<"Size 1 : "<<v.size()<<endl;
    cout<<"Capacity 1 : "<<v.capacity()<<endl;
    
}
int main(){
vector<int>v;
v.push_back(5);
cout<<"Address of Orginal object: "<< &v <<endl; // add. of above vector
address1(v);
address2(v);
}
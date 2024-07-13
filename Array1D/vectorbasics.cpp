#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v; //Declaration
    v.push_back(4);//Insertion
    v.push_back(3);//Pushback doubles vector's intial capacity/Size
    v.push_back(4);
    v[1] = 7;
    cout<< v[0]<<" ";//Output
    cout<< v[1]<<" ";
    cout<< v[2] <<" ";
     cout<< v[3]<<" ";
}






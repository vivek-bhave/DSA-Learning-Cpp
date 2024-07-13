#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;

    v.push_back(4);
cout<< v.size() <<" ";//Displays Size
    v.push_back(3);
    v.push_back(4);
    cout<< v.capacity()<<endl;//Displays the cap. of vector
    for(int i=0;i<=v.size();i++){
        cout<< v[i]<<" ";
    }




}


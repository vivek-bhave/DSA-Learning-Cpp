#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(5);
cout<< &v << endl;
cout<< v.data();
}
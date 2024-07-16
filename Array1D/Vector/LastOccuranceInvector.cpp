#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    int x = 3;
    int idx = -2;
    for(int i=0;i<v.size();i++){
        if(v[i]==x) idx = i;
    }
    cout<<idx;
}
#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
int i = 0;
int n = v.size();
int j = n - 1;
while(i<j){
if(v[i]==0) i++;
if(v[j]==1) j--;
if(i>j) break;
if(v[i]==1 && v[j]==0){
 v[i] = 0;
 v[j] = 1;
}

}
}
int main(){
vector<int> v;
v.push_back(1);
v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
for(int i=0;i<v.size();i++){
    cout<< v[i] <<" ";
}
cout<< endl;
sort01(v);
for(int i=0;i<v.size();i++){
    cout<< v[i] <<" ";
}

}
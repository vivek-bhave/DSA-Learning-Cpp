#include<iostream>  //Q.Find the doublet in the array whose sum is equal to the given value
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(23);
    int x = 9;//Given value
    
    for(int i=0;i<v.size();i++){  
        for(int j=i;j<v.size();j++){
 if(v[i]!=v[j]){if(v[i]+v[j]==x){cout<<"("<<v[i]<<","<<v[j]<< ")"<<endl;}}}}}
  
            
//key pointes: 1.We need to initialise a second loop with j=i+1 Bc if you run the loop from 0 it 
// will give repeated doublets.Also can be done j=i with condt. if(v[i]!=v[j]) in 2nd loop.
        
        
    

#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<< v1[i]<<" ";
    }
    cout<< endl;
}

void reverse(int i,int j, vector<int>&v){
    
    int temp = 0;
    while(i<=j){
     temp = v[j];
     v[j] = v[i];
     v[i] = temp;
     i++;
     j--;
    }
}

int main(){
    int n,m,a,b;
    cout<<"Enter the Size of vector: ";
    cin>> m;
    cout<<"Enter the elements: ";
    vector<int> v;
    int i=0,j=m-1,temp=0;
    for(int i=0;i<m;i++){
        cin>> n;
        v.push_back(n);
    }
    cout<<"Enter First index: ";
    cin>> a;
    cout<<"Enter second index: ";
    cin>> b;
   
   reverse(a,b,v);
   Display(v);
}
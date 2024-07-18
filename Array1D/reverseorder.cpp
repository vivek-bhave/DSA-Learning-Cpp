#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>> m;
    cout<<"Enter a element: ";
    vector<int> v;
    for(int i=0;i<m;i++){
        cin>> n;
        v.push_back(n);
    }
    int i=0,j=m-1,temp=0;
    while(i!=m/2+1){
     temp = v[j];
     v[j] = v[i];
     v[i] = temp;
     i++;
     j--;
    }
   for(int i=0;i<m;i++){
        cout<< v[i]<<" ";
    }

}
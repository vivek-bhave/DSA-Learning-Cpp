//Q. WAP to reverse a part of vector/array.
//Approach: 1.Initialise variables for vector size
//2.Take Input vector and for Index parts i.e foe reversing a vector from index to index.
//3.Creat function of reverse part which only revesrse the Index parts and pass  vector name and index numbers
//such that those elements only get reversed inbetween index no.
//4.Write swapping code in reverse part function.
//5.Display a vector.
#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<< v1[i]<<" ";
    }
    cout<< endl;
}

void reversepart(int i,int j, vector<int>&v){
    
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
    cout<<"Enter First index: "; // index parts
    cin>> a;
    cout<<"Enter second index: ";
    cin>> b;
   
   reversepart(a,b,v); 
   Display(v);
}
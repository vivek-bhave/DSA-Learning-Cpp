//Q. WAP to reverse a array/Vector elements in a single Array.
// Approach: 1. Take input first for size of array and then for vector elements through loop.
// 2.Initialise variables for swapping vector elements
//3.Write code for swapping vector elements in loop such that it swaps 1st with last. 2nd with 2nd last and so on until a condtion
//4.Condition for loop i<=j cause for i<v.size() gives same vector.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the Size of vector: ";
    cin>> m;
    cout<<"Enter the elements: ";
    vector<int> v;
    for(int i=0;i<m;i++){
        cin>> n;
        v.push_back(n);
    } // intialisation for swapping variables
    int i=0,j=m-1,temp=0;
    while(i<=j){ // condition for swapping
     temp = v[j];
     v[j] = v[i]; // swapping code
     v[i] = temp;
     i++;
     j--;
    }
   for(int i=0;i<m;i++){
        cout<< v[i]<<" ";
    }

}
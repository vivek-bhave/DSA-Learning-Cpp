#include<iostream>
using namespace std;
void display(int ar[]){ //display passes add. of arr in ar
    for(int i=0;i<=4;i++){
    cout<< ar[i] <<" ";
}
}
void change(int c[]){
    c[0] = 67;
    return;
}
int main(){
    int arr[]  =  {1,2,3,4,5};//accessing array to another function
   //pass by reference(it passes the address of first element = add. of arr)
   int size = sizeof(arr)/sizeof(arr[0]);
     display(arr);
     change(arr);
     display(arr);
}
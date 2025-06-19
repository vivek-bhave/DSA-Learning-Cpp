#include<iostream>
using namespace std;
void display(int* a ,int n,int i){
    if(i==n) return;
cout << a[i] <<' ';
display(a,n,i+1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size,0);
}
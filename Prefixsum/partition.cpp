#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]) flag = true; 
    }
    if(flag=true) cout << "there does exist any such partitiom index" ;
    else cout << "there does not exist any such partitiom index";

}
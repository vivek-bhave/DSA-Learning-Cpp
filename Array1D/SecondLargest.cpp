#include<iostream>
#include<math.h>
using namespace std;
int main(){
int arr[] = {4,23,67,89,24,56};
int mx = arr[0]; // OR = INT_MIN;
for(int i=0;i<=5;i++){
// OR if(arr[i]>mx) mx = arr[i];
     mx = max(arr[i],mx);
}
int smx = arr[0];
for(int i=0;i<=5;i++){
if(arr[i]>smx){if(arr[i]!=mx) smx = arr[i];}
}
cout<< smx;
}
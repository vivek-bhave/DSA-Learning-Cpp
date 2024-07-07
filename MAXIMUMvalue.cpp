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
cout<< mx;
}
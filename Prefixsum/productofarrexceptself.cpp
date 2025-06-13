#include<iostream>
#include<vector>
using namespace std;
void product(int*arr, int n){
    vector<int> prodBfr(n);
    vector<int> prodAfr(n);
    prodBfr[0] = 1;
    for(int i=0;i<n;i++){
      prodBfr[i+1] =  prodBfr[i]*arr[i];
    }
    prodAfr[n-1] = 1;
    for(int i=n-1;i>=0;i--){
      prodAfr[i-1] =  prodAfr[i]*arr[i];
    }
    for(int i=0;i<n;i++){
      prodBfr[i] =  prodBfr[i]*prodAfr[i];
      cout << prodBfr[i] <<' ';
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    product(arr,n);
}
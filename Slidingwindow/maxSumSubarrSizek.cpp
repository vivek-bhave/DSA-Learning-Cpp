//Q.Find the  maximum sum of Subarray of size k 
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void array(int* arr,int k,int n){
int sum = 0;
int maxSum = INT_MIN;
int i = 0;
int j = k;
for(int i=0;i<k;i++){
    sum += arr[i];
}
// This is one of the important structure of sliding window remember it.
while(j<n){
    sum += arr[j] - arr[i];  // ********IMP Line **********
    maxSum = max(maxSum,sum);
    i++;
    j++;
}
cout << maxSum;
}
int main(){
int arr[] = {7,1,2,5,8,4,9,3,6};
int n = sizeof(arr)/sizeof(arr[0]);
array(arr,3,n);
}
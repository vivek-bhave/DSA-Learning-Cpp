#include<iostream>
#include<vector>
using namespace std;
void answer(int* arr,int n,int k){
    vector<int> ans(n-k+1,0);
    int i = 1;
    int j = k;
    int pi;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            pi = i;
            ans[0] = arr[i];
            break;
        }
    }
   while(j<n){
    if(pi>=i) ans[i] = arr[pi];
    else{
    for(int pi=i;pi<=j;pi++){
     if(arr[pi]<0){
        ans[i] = arr[pi];
        break;
     }
    }
    }
    i++;
    j++;
   }
   for(int i=0;i<n-k+1;i++){
    cout << ans[i] <<" ";
   }
}
int main(){
    int arr[9] = {2,-3,4,4,-7,-1,4,-2,6};
   int n = sizeof(arr)/sizeof(arr[0]);

   answer(arr,n,3);
}
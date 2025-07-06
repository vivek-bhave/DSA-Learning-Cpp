//Q.WAP to print all the subarrays using recursion.
// HINT : Print only those subsets which are continous. 
#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,int idx,vector<int> ans){
    
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout << ans[i];
        }
        cout << endl;
        return;
    }
    
    subset(arr,n,idx+1,ans);
    if(ans.size()==0){// The first recursive call works without any condtion if ans array is empty
    ans.push_back(arr[idx]);
    subset(arr,n,idx+1,ans);}
  else if(ans[ans.size()-1]==arr[idx-1]){ // This condition only checks which subset are continous
   ans.push_back(arr[idx]);              // both condition can also be written in single OR if statement
    subset(arr,n,idx+1,ans);
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    vector<int> ans;
    subset(arr,n,idx,ans);
    
}
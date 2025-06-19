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
    ans.push_back(ans[idx]);
    subset(arr,n,idx+1,ans);
    
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    vector<int> ans;
    subset(arr,n,idx,ans);
    cout << 4;
}
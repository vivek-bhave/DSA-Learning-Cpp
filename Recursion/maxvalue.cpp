#include<iostream>
#include<vector>
using namespace std;
void maximum(vector<int>& v, int i,int ma){
    if(i==v.size()){
        cout << ma;
        return;
    }
if(ma<v[i]) ma = v[i];
maximum(v,i+1,ma);
}
int main(){
    int n = 5;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin >> v[i];
}
maximum(v,0,v[0]);
}
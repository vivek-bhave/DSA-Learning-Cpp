#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void permutation(string ans,string original,int idx){
    if(original.length()==0){
        cout << ans << endl;
        return;
    }
        if (idx >= original.length()) return;

    string leftsubstr = original.substr(0,idx);
    string rightsubstr = original.substr(idx+1);
    ans.push_back(original[idx]);
    permutation(ans,leftsubstr+rightsubstr,0);
    if(original.length()>=2){
        permutation(ans.substr(0,ans.size()-1),original,idx+1);
    }
}
int main(){
    string s = "abcd";
    permutation("",s,0);
}
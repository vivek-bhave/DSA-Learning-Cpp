#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void permutation(string ans,string original){
    if(original.length()==0){
        cout << ans << endl;
        return;
    }
     for(int i=0;i<original.size();i++){   
        char ch = original[i];
    string leftsubstr = original.substr(0,i);
    string rightsubstr = original.substr(i+1);
    
    permutation(ans+ch,leftsubstr+rightsubstr);
        
     }
}
int main(){
    string s = "abc";
    permutation("",s);
}
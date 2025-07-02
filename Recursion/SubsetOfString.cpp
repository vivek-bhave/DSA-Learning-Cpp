// Q. Generate all subsets (power set) of a given string using recursion.
//
// ✅ Core concepts used:
// - Recursion on string characters
// - Choice diagram: include or exclude each character
// - Base case is when the original string becomes empty
//
// 🧠 How to think about it:
// At each step, you decide whether to include the current character or skip it.
// This gives you 2^n total combinations for a string of length n.
// It’s a classic example of recursive tree branching for subset generation.
//
// 🧭 Tip: Use substrings carefully, as they create new strings and preserve recursion purity.


#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

void storesubset(string ans,string original,vector<string>&s){
    if(original.length()==0){
        s.push_back(ans);
        return;
    }
    bool found = false;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<original.size();j++){
        if(ans[i]==original[j]) found = true;
        }
    }
 if(found==true){   
char ch = original[0];
original = original.substr(1);
storesubset(ans+ch,original,s);}
storesubset(ans,original,s);
   
}
int main(){
    string str = "aba";
    vector<string> s;
storesubset("",str,s);
for(int i=0;i<s.size();i++){
    cout << s[i] << endl;
}
cout << 4;
}

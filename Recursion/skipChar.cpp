#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

void charem(string ans,string original){
if(original.length()==0){
    cout<< ans;
    return;
}
   char ch = original[0];
   if(ch!='v') ans += ch;
   original = original.substr(1); // removes first char of original
   charem(ans,original);
   
}
int main(){
    string str = "Vivek Bhave";
charem("",str);

}
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
string s = "I am a math grad and a math student";
stringstream ss(s);
string temp;
vector<string> v;
while(ss>>temp){ //ss>> behaves like cin for string variable temp
    v.push_back(temp); // temp takes input word of string s string in every iteration
}
for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout << v[i] << endl;
}
int max = 0;
int count = 0;
for(int i=1;i<v.size();i++){
    if(v[i-1]==v[i]) count++;
    else count = 1;
    if(max<count) max = count;
}
count  = 0;
for(int i=1;i<v.size();i++){
    if(v[i-1]==v[i]) count++;
    else count = 1;
    if(max==count) cout << v[i] <<" is "<< count << endl;
}
}
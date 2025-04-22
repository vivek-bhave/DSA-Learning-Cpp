#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s = "VIVEKbosh";
sort(s.begin(),s.end()); //Sorts according to ASCII values so first capital and then small letters
cout << s;

}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string str = "I am learning DSA";
cout << str << endl;

//Both are same str.length() and str.size()
cout << str.size() << endl;
cout << str.length() << endl;

//push_back
str.push_back('v');
cout << str << endl;

//pop_back
str.pop_back();
cout << str << endl;

// '+' Operator
string s = " Vivek ";
string t = " Bhave ";
s = s + t;
cout << s << endl;

//reverse()
string c = "Vivek";
reverse(c.begin()+1,c.end()-1); // Reversing from index = 1 to index = 3
cout << c << endl;
reverse(c.begin(),c.end()); //Reversing whole string
cout << c << endl;


}
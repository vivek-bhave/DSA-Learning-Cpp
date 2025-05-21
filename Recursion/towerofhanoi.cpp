#include<iostream>
using namespace std;
void way(int n, char a,char b,char c){
if(n==0) return ;
way(n-1,a,c,b);
cout << a <<" -> "<< c <<endl;
way(n-1,b,a,c);
}
int main(){
    int n = 3;
    way(n,'A','B','C');
}
//Q. WAP to print all the binary string of size n without any consecutive 1's
// Step 1: Solve the general problem (all binary strings)
// Step 2: Apply constraint (avoid placing '1' after another '1')

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void displaybinarystring(string ans,int n){
    if(ans.size()==n){
      cout << ans <<endl;
      return;
    }
    displaybinarystring(ans+'0',n);
if(ans.empty() || ans.back() =='0') // --> This condition avoids those strings with consecutive 1's
    displaybinarystring(ans+'1',n);

}
int main(){
    int n = 4;
    displaybinarystring("",n);
}
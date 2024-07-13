#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,56,78,23,45};
    int* ptr = arr;//Gives the address of an array 
    cout<< ptr <<endl;   // Which is same as address of 1st element of array
              // also address of 1st byte in the memory of first element
    cout<< ptr[0]<<endl;  // can access the elemrnts of arr (NEW)
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";// accessing all elements
    }
    cout<<endl<<*ptr; //give 34 because ptr stores add. of 1st ele.
    ptr++; // changes add. in ptr by 4 bytes(cause int takes 4 byte memory) which is add.of 2nd ele.
    cout<<endl<< *ptr<<endl; //ptr has add.of 2nd element so gives 56
    ptr = arr; //ptr again stores add.of 1st ele./add. of arr

for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
ptr = arr;

}
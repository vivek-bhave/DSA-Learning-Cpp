//Q. WAP to Rotate a vector elements k times 
// Ex: Vector: 12 34 56 78 ; k = 3
// Rotated vector: 34 56 78 12
#include<iostream>
#include<vector>
using namespace std;
void Display(vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        cout<< v1[i]<<" ";
    }
    cout<< endl;
}
void reverse(int i,int j, vector<int>&v){
    int temp = 0;
    while(i<=j){
     temp = v[j];
     v[j] = v[i];
     v[i] = temp;
     i++;
     j--;
    }
}

int main(){
    int n,m,k,l;
    cout<<"Enter the Size of vector: ";
    cin>> m;
    cout<<"Enter the elements: ";
    vector<int> v;
    int i=0,j=m-1,temp=0;
    for(int i=0;i<m;i++){
        cin>> n;
        v.push_back(n);
    }
     l = v.size();
    cout<<"Enter the number of rotation: ";
    cin>> k;
    if(k>m){k = k % m;} // when k>size ex:size = 5, k = 7 k%size = 2 to keep k<size
    //These following three codes are for rotating vector
    // vector: 23 45 67 76 54 ; k = 3; l= size = 5
   reverse(0,l-1-k,v);// v: 45 23 67 76 54 (reverses: 45 23)
   reverse(l-k,l-1,v);// v: 45 23 54 76 67 (reverses: 67 76 54)
   reverse(0,l-1,v);// v: 67 76 54 23 45 rotated array
   Display(v);
}
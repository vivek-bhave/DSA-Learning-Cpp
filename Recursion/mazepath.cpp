#include<iostream>
#include<string>
using namespace std;

void path(int row,int col ,string currpath){
       if(row==1 && col==1){
         cout << currpath << endl;
         return;
        }
    if(col>1) path(row,col-1,currpath +'R');
     if(row>1) path(row-1,col,currpath +'D');

}
int main(){
    int noofRows = 3;
    int noofcol = 3;
 path(noofRows,noofcol," ");    
}
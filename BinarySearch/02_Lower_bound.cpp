// Q) Find the lower bound of the target
// Lower bound : Smallest neighbourhood value of target in array.

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    int n,c,t;

    cout << "Enter the size Array : ";
    cin >> n;
    cout << endl;

    cout << "Enter the sorted Array : ";
    for(int i = 0 ; i < n ;i ++){
        cin >> c;
        v.push_back(c);
    }

    cout << "Enter the target : ";

    cin >> t;

    int high,mid,low;
    high = n - 1;
    low = 0;

    while(low<=high){
        mid = low + (high - low )/2;
        if(v[mid] == t){ 
            cout << v[mid - 1]; // lower bound if target exist in array
            break;
        }
        else if(v[mid] < t) low = mid + 1;
        else high = mid - 1;

    }

    cout << v[high];//Lower bound when target doesn't exist in array.similarly v[low] becomes upper bound.
}

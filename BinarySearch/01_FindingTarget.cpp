
// Q) Find the target t in the sorted array
// Key points
// sorted array
// Linear search O(n) and Binary Search O(logn)\
// Reduces search space by half
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

    cout << "Enter the target : "; // The given target that needs to find in given array.

    cin >> t;
    
    
    int high,mid,low;
    high = n - 1;
    low = 0;

    // Search space [v[low], v[high]]

    while(low<=high){
        mid = low + (high - low )/2; // equivalent to (low + high)/2 which we avoid as it causes integer overflow.
        if(v[mid] == t){ 
            cout << mid;
            break;
        }
        else if(v[mid] < t) low = mid + 1; //  The target does not exist between low and mid,So low = mid + 1 not low = mid because mid is not target
        else high = mid - 1;// same logic for high

    }
}
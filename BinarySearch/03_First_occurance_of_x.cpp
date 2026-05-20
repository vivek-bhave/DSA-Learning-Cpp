// Ques :Given a sorted array of n elements and a
// target ‘x’. Find the first occurrence of ‘x’ in the
// array. If ‘x’ does not exist return -1.

// arr=[1, 2, 2, 3, 3 ,3, 3, 3, 4, 4,5,8,93]; x = 3
// Output = 3

/*
Approach:
Modified Binary Search

When target is found:
- store answer
- continue searching left side
because earlier occurrence may exist.
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v = {1, 2, 2, 3, 3 ,3, 3, 3, 4, 4,5,8,93};
    
    int n = v.size();
    int high,mid,low;
    int ans = -1;
    int target = 3;
    high = n - 1;
    low = 0;

    while(low<=high){
        mid = low + (high - low )/2;
        if(v[mid] == target){
            ans = mid; // If we found the target we store it
            // high = mid -1 as we are looking for 1st occurence so search space reduces to left.
            high = mid - 1;// And look for better soln if it exist if it doesn't we already have previous one stored.
        } 
        else if(v[mid] < target) low = mid + 1;
        else high = mid - 1;

    }

    cout << ans;
}

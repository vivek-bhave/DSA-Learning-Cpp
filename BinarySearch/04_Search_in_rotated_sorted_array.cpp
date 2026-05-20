// Find the target in rotated sorted array.

// arr=[28,33,1,3,4,8,20]; target = 8 

/*
Approach:
1.First find the pivot which is the max value of array. That is arr[i - 1] <arr[i] > arr[i + 1] using binary search.
2. The pivot divides the original array in two parts where we can apply normal binary search in any of the part array
3. part1= [28,33] and part2 =[1,3,4,8,20]
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v = {33,1,3,4,8,20,28};
    
    int n = v.size();
    int mid;
    int target = 8;
    int high = n - 2;
    int low = 1;
    int pivot = -1;
    
    // Edge cases.
    if(v[0] > v[1]) pivot = 0;

    while(low <= high){

        mid = low + (high - low )/2;

        if(v[mid - 1] < v[mid] && v[mid] >  v[mid + 1]){
            pivot = mid;
            break;
        } 
        else if(v[mid] > v[low]) low = mid + 1; 
        else high = mid - 1;
    }

    // Finding Target
    if(v[0] <= target && pivot != -1 && target <= v[pivot] ) {
        low = 0;
        high = pivot;

        while(low <= high){

        mid = low + (high - low )/2;

        if(v[mid] == target){
            cout << mid;
            break;
        } 
        else if(target > v[mid]) low = mid + 1; 
        else high = mid - 1;
    }
    }
    else {
        low = pivot + 1;
        high = n - 1;

        while(low <= high){

        mid = low + (high - low )/2;

        if(v[mid] == target){
            cout << mid;
            break;
        } 
        else if(v[mid] < target) low = mid + 1; 
        else high = mid - 1;
    }
}}

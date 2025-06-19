// Q. Find the minimum size of subarray whose sum is greater than or equal to target = 7. (Leetcode-209)
// 🧠 This sliding window structure is useful when asked to find subarrays
// with sum greater than or less than integer k, especially when the window size is variable.

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void minSize(int* arr, int target, int n) {
    int i = 0, j = 0;
    int sum = 0;
    int len = 0;
    int minLen = n;

    while (j < n) {
        sum += arr[j];  // j usually makes the operation without any condition

        // This while loop structure is important.
        // The condition can influence the final result or just help shrink 'i' toward right.
        while (sum >= target) {
            len = j - i + 1;
            minLen = min(len, minLen);
            sum -= arr[i];
            i++;
        }

        j++;
    }

    cout << minLen;
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    minSize(arr, 7, n);
}

// Q. Generate all subsets (power set) of a given array using recursion.
// This recursive structure explores every possibility by making a decision at each index: 
// whether to include the current element or not.
//
// ✅ Core concepts used:
// - Recursive tree traversal
// - Passing the current subset (`ans`) by value to avoid backtracking
// - Base case triggered when index reaches array size
//
// 📌 Pattern: Choice Diagram (Include or Exclude)
// 🧠 Useful for building intuition about backtracking & subset generation

#include<iostream>
#include<vector>
using namespace std;

void generateSubsets(int idx, vector<int> ans, vector<int>& original) {
    if(idx == original.size()) {
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude current element
    generateSubsets(idx + 1, ans, original);

    // Include current element
    ans.push_back(original[idx]);
    generateSubsets(idx + 1, ans, original);
}

int main() {
    vector<int> input = {1, 2, 3, 4};
    vector<int> ans;
    generateSubsets(0, ans, input);
    return 0;
}

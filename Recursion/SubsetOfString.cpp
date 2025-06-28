// Q. Generate all subsets (power set) of a given string using recursion.
//
// ✅ Core concepts used:
// - Recursion on string characters
// - Choice diagram: include or exclude each character
// - Base case is when the original string becomes empty
//
// 🧠 How to think about it:
// At each step, you decide whether to include the current character or skip it.
// This gives you 2^n total combinations for a string of length n.
// It’s a classic example of recursive tree branching for subset generation.
//
// 🧭 Tip: Use substrings carefully, as they create new strings and preserve recursion purity.

#include<iostream>
#include<vector>
using namespace std;

void generateStringSubsets(string ans, string original, vector<string>& subsets) {
    if(original.length() == 0) {
        subsets.push_back(ans);
        return;
    }

    char ch = original[0];
    string rest = original.substr(1);

    // Include the current character
    generateStringSubsets(ans + ch, rest, subsets);

    // Exclude the current character
    generateStringSubsets(ans, rest, subsets);
}

int main() {
    string input = "abc";
    vector<string> subsets;

    generateStringSubsets("", input, subsets);

    // Output all generated subsets
    for(const string& str : subsets) {
        cout << str << endl;
    }

    return 0;
}

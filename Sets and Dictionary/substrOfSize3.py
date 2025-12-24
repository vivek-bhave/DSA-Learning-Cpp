'''A string is good if there are no repeated characters.

Given a string s​​​​​, return the number of good substrings of length three in s

Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

A substring is a contiguous sequence of characters in a string. LEETCODE 1876

 '''


# s = "xyzzaz"
s = "aababcabc"
i,j = 0,2
count = 0
while j < len(s):
    str = s[i:j+1] # O(3)
    if len(set(str)) == 3: # set(str) takes O(3) so we can use this when we have fixed sliding window not when variable window
        count += 1

    i += 1
    j += 1

print(count)
# T(n) = O(3*3*n) = O(n)
# Use set to identify the presence of duplicates not for how many
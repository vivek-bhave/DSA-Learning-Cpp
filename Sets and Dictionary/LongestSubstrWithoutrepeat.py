# Given a string s, find the length of the longest substring without duplicate characters.
s = "abcabcbb"
seen = set()
i = 0
maxlen = 0

for j in range(len(s)):
    while s[j] in seen:
        seen.remove(s[i]) # We used set instead list because seen.remove takes O(1) for list it takes O(n)
        i += 1

    seen.add(s[j])
    maxlen = max(maxlen, j - i + 1)
print(maxlen)
# Prefix Sum

## What is Prefix Sum?

A **prefix sum** is a technique used to preprocess an array or string so that you can quickly answer queries about the sum (or count) of elements in any subarray or substring.

Given an array `A` of length `n`, the prefix sum array `P` is defined as:
- `P[0] = A[0]`
- `P[i] = P[i-1] + A[i]` for `i > 0`

This allows you to compute the sum of any subarray `A[l...r]` in constant time:
- If `l == 0`: `sum = P[r]`
- Else: `sum = P[r] - P[l-1]`

## Why use Prefix Sum?

- **Efficient Range Queries:** Answer sum/count queries in O(1) time after O(n) preprocessing.
- **Common in Competitive Programming:** Used for problems involving range sums, counts, or frequency queries.

## Example

Suppose you have an array:  
`A = [2, 4, 5, 7, 1]`

The prefix sum array is:  
`P = [2, 6, 11, 18, 19]`

To find the sum from index 1 to 3 (`A[1] + A[2] + A[3]`):  
`sum = P[3] - P[0] = 18 - 2 = 16`

## Application to Strings

You can also use prefix sums to count occurrences of a character in a substring.  
For example, to count the number of `'a'`s in a substring of a string `s`, build an array where each element at index `i` is the number of `'a'`s in `s[0...i]`.

## Code Example

```cpp
string s;
cin >> s;
vector<int> arr(s.length(), 0);
arr[0] = (s[0] == 'a' ? 1 : 0);
for (int i = 1; i < s.length(); i++) {
    arr[i] = arr[i-1] + (s[i] == 'a' ? 1 : 0);
}
// To count 'a's in s[l...r]:
int count = arr[r] - (l > 0 ? arr[l-1] : 0);
```

## Summary

Prefix sums are a powerful tool for efficient range queries in arrays and strings. They are easy to implement and widely used in algorithmic problem solving.

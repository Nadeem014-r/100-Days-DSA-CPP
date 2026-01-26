/*
--------------------------------------------------
Day 63 – Remove All Occurrences of a Character Using Recursion
Problem: Remove All Occurrences of a Character from String
Platform: GeeksforGeeks

Approach:
- Traversed the string character by character using recursion
- Skipped the given character and kept remaining characters
- Built the resulting string through recursive returns

Learning Focus:
- Applying recursion to string manipulation
- Understanding how results are built during backtracking

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack + result string)
--------------------------------------------------
*/
class Solution {
  public:
    void solve(string &s, char c, int i) {
        // base case
        if (i == s.length())
            return;

        if (s[i] == c) {
            s.erase(i, 1);        // remove character
            solve(s, c, i);       // stay at same index
        } else {
            solve(s, c, i + 1);   // move forward
        }
    }

    void removeCharacter(string &s, char c) {
        solve(s, c, 0);
    }
};

/*
--------------------------------------------------
Day 58 – Check Palindrome String Using Recursion
Problem: Check if a String is Palindrome
Platform: GeeksforGeeks

Approach:
- Compared characters from both ends of the string
- Used recursion to move inward after each comparison
- Defined base case when indices meet or cross

Learning Focus:
- Applying recursion on strings
- Understanding base case and recursive reduction

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    bool helper(string &s, int l, int r) {

        // base case: indices crossed or met...
        if(l >= r)
            return true;

       
        if(s[l] != s[r])
            return false;

        
        return helper(s, l + 1, r - 1);
    }

    bool isPalindrome(string& s) {
        return helper(s, 0, s.length() - 1);
    }
};

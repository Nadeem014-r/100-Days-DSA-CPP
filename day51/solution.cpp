/*
--------------------------------------------------
Day 51 – Palindrome Number Using Recursion
Problem: Check if a Number is Palindrome
Platform: GeeksforGeeks

Approach:
- Used recursion to reverse the number digit by digit
- Compared the reversed number with the original number

Learning Focus:
- Strengthening recursion basics
- Understanding base case and recursive calls clearly

Time Complexity: O(d)  (d = number of digits)
Space Complexity: O(d) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int reverseNum(int n, int rev) {
        // base case
        if(n == 0)
            return rev;

        // recursive call
        return reverseNum(n / 10, rev * 10 + (n % 10));
    }

    bool isPalindrome(int n) {
        int reversed = reverseNum(n, 0);
        return n == reversed;
    }
};

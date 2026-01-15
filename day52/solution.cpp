/*
--------------------------------------------------
Day 52 – Reverse Digits of a Number Using Recursion
Problem: Reverse Digits
Platform: GeeksforGeeks

Approach:
- Extract the last digit using modulo operation
- Build the reversed number recursively
- Stop recursion when the number becomes zero

Learning Focus:
- Understanding recursive return values
- Strengthening recursion fundamentals

Time Complexity: O(d)  (d = number of digits)
Space Complexity: O(d) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int helper(int n, int rev) {
        // base case
        if(n == 0)
            return rev;

        // recursive call
        return helper(n / 10, rev * 10 + (n % 10));
    }

    int reverseDigits(int n) {
        return helper(n, 0);
    }
};

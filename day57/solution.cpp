/*
--------------------------------------------------
Day 57 – Reverse Exponentiation Using Recursion
Problem: Reverse Exponentiation
Platform: GeeksforGeeks

Approach:
- Reversed the given number using recursion
- Used the reversed value as the exponent
- Calculated n raised to power reverse(n)

Learning Focus:
- Combining recursion with mathematical operations
- Understanding how recursion can simplify digit-based problems

Time Complexity:
- Reverse number: O(d) where d = number of digits
Space Complexity: O(d) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    // helper function to reverse number using recursion
    int reverseNum(int num, int rev) {
        // base case...........
        if(num == 0)
            return rev;

        return reverseNum(num / 10, rev * 10 + (num % 10));
    }

    int reverseExponentiation(int n) {
        int rev = reverseNum(n, 0);  
        return pow(n, rev);          
    }
};

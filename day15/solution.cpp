/*
🔢 Problem: Corner Digit Sum
---------------------------------
Given an integer n, return the sum of its first and last digit.

📝 Notes:
- If n is a single-digit number, return n itself.
- For multi-digit numbers:
    • Extract the last digit using n % 10
    • Find the first digit (either via reversing or repeated division)
    • Return first + last

Example:
Input: 1234
First digit = 1
Last digit  = 4
Output = 5

Input: 7
Output = 7 (single-digit case)

💻 Approach:
- Added a guard condition for single-digit numbers.
- Used reverse method to extract the first digit (as per original code).
*/

class Solution {
public:
    int corner_digitSum(int n) {

        
        if (n >= 0 && n < 10) return n;

        int k = n;
        int rev = 0;

        // reverse the number
        while (k > 0) {
            int dig = k % 10;
            rev = rev * 10 + dig;
            k /= 10;
        }

        int first = rev % 10;  // first digit
        int last = n % 10;     // last digit

        return first + last;
    }
};

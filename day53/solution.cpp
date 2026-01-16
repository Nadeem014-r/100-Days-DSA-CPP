/*
--------------------------------------------------
Day 53 – Sum of Digits Using Recursion
Problem: Find Sum of Digits of a Number
Platform: GeeksforGeeks

Approach:
- Used recursion to process one digit at a time
- Extracted last digit using modulo operator
- Reduced the number by dividing it by 10

Learning Focus:
- Understanding base case in recursion
- Building result through recursive returns

Time Complexity: O(d)  (d = number of digits)
Space Complexity: O(d) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int sumOfDigits(int n) {
        // base case........
        if(n == 0)
            return 0;

        // recursive case...........
        
        return (n % 10) + sumOfDigits(n / 10);
    }
};
 

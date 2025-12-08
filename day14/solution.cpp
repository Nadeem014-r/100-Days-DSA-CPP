/*
 * Description: Calculates the nth Fibonacci number using an iterative while loop.
 * Problem Statement:
 *   Given a number n, return the nth Fibonacci number.
 *   Fibonacci sequence: F(1) = 1, F(2) = 1, F(n) = F(n-1) + F(n-2) for n > 2
 *
 * Approach:
 *   - Handle base cases for n = 1 and n = 2
 *   - Use two variables to store the previous two Fibonacci numbers
 *   - Iteratively calculate Fibonacci numbers using a while loop
 *   - Return the nth Fibonacci number
 *
 * Time Complexity: O(n)  
 * Space Complexity: O(1)
 *
 * Example:
 *   Input: n = 5
 *   Output: 5
 *   Input: n = 7
 *   Output: 13
 */

class Solution {
  public:
    int nthFibonacci(int n) {
        // Base cases: 1st and 2nd Fibonacci numbers are 1
        if (n == 1 || n == 2) 
            return 1;

        int a = 1; // F(1)
        int b = 1; // F(2)
        int i = n; // copy of n for while loop
        int c = 0; // to store current Fibonacci number

        // Loop from 3rd to nth Fibonacci number
        while (i - 2 > 0) {
            c = a + b; // next Fibonacci number
            a = b;     // shift previous numbers
            b = c;     // shift current number
            i--;       // decrement loop counter
        }

        return c; // nth Fibonacci number
    }
};

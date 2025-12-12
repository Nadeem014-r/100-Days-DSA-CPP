/*
    🧮 Trailing Zeroes in Factorial (n!)
    ------------------------------------
    Logic:
    - Trailing zero = pair of (2 × 5)
    - Factorials have plenty of 2s but fewer 5s
    - So the number of trailing zeros = count of factors of 5 from 1 to n
    - We repeatedly divide n by 5, 25, 125... to count how many 5s appear

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int trailingZeroes(int n) {

        int count = 0;  
        // count = total number of trailing zeros

        while (n > 0) {

            n = n / 5;  
            // Every multiple of 5 adds one trailing zero.
            // Dividing again counts extra 5s (like in 25, 125 etc.)

            count += n; 
            // Add how many numbers contributed a factor of 5
        }

        return count;  
        // Total trailing zeros in n!
    }
};

/*
    Title: GCD Using Euclid's Algorithm
    Author: Nadeem (or your name)
    Description:
        This function calculates the Greatest Common Divisor (GCD)
        of two integers using the efficient Euclidean Algorithm.
        The algorithm repeatedly replaces (a, b) with (b, a % b)
        until the remainder becomes zero.
        
        Time Complexity: O(log(min(a, b)))
        Space Complexity: O(1)

        This is the most optimal and standard method to compute GCD.
*/

class Solution {
  public:
    int gcd(int a, int b) {
        
        // Repeat the process until second number becomes 0
        // Euclid's Algorithm: gcd(a, b) = gcd(b, a % b)
        while (b != 0)
        {
            // Store current b (because after modulo, b will change)
            int temp = b;

            // Replace b with the remainder of a divided by b
            b = a % b;

            // Now assign a = previous b (stored in temp)
            a = temp;
        }
        
        // When b becomes 0, 'a' contains the GCD
        return a;
    }
};

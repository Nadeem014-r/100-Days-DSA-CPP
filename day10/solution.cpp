// 📝 Problem: Find LCM (Least Common Multiple) of two numbers
// -----------------------------------------------------------
// The LCM of two numbers 'a' and 'b' can be calculated using:
//      LCM(a, b) = (a * b) / GCD(a, b)
// This code first finds the GCD using the Euclidean Algorithm,
// then computes the LCM safely by using long long to avoid overflow.

class Solution {
public:
    int lcm(int a, int b) {
        
        int x = a;   // store first number for GCD calculation
        int y = b;   // store second number for GCD calculation

        // compute GCD using Euclidean algorithm
        while (y != 0)
        {
            int temp = y;  // temporarily store y
            y = x % y;     // update y with remainder of x % y
            x = temp;      // move previous y into x
        }
        // at this point, x holds the GCD of a and b
  
  
         long long int k=(a*b)/x;  // compute LCM using (a*b)/gcd with overflow protection
         return k;
    }
};

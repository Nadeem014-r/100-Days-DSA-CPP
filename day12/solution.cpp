// ## Perfect Number Checker

// This function checks if a number `n` is a **perfect number**.

// - A perfect number is a positive integer equal to the sum of its proper divisors (excluding itself).  
// - Example: 6 → divisors 1,2,3 → sum = 6 ✅  

// ### Logic:
// 1. Start sum = 1 (1 is always a divisor).  
// 2. Loop from 2 to √n to find divisors in pairs `(i, n/i)`.  
// 3. Add both divisors to sum (avoid double-counting perfect squares).  
// 4. If sum equals n → return true, else false.


class Solution {
public:
    bool isPerfect(int n) {
        if (n <= 1) return false; // 1 or less can't be perfect
        
        int sum = 1; // start from 1 because 1 is always a proper divisor
        
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                int div = n / i;
                if (div != i) sum += div; // add the pair divisor if it's different
            }
        }

        return sum == n;
    }
};

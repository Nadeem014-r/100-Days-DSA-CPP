// Problem: Count Number of Factors of a Given Number
// This function returns how many positive integers divide 'n' exactly.
// Example: Input: 12 → Output: 6 (factors are 1,2,3,4,6,12)

// Optimized Approach:
// Instead of checking all numbers from 1 to n,
// we only loop until √n because factors come in pairs.
// Example: For 12 → (1,12), (2,6), (3,4)

class Solution {
  public:
      int countFactors(int n) {
      int count = 0;
    // Only run loop up to square root of number.
    for (int i = 1; i * i <= n; i++) {
      
        if (n % i == 0) {   // If 'i' is a factor of 'n'
            count++; // Found the smaller factor.
          
            // If they aren't the same (like 6x6), add the pair.
            if ((n / i) != i) count++; 
        }
    }
    return count;
}

};

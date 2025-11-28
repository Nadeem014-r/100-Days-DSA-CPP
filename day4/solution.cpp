// Problem: Sum of Digits of a Number
// This function takes an integer 'n' and returns the sum of its digits.
// Example: Input: 1234 → Output: 10 (1 + 2 + 3 + 4)

class Solution {
  public:
    int sumOfDigits(int n) {
        int sum = 0;          // will store the total sum of digits.
      
        while (n > 0) {
            int dig = n % 10; // extract the last digit from the number.
            sum = sum + dig;  // add the extracted digit to the sum.
            n = n / 10;       // remove the last digit from the number.
        }
      
        return sum;           // return the final sum of all digits.
    }
};

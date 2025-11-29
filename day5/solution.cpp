// Problem: Check if a number is a Palindrome
// A number is palindrome if it reads the same forward and backward.
// Example: 121 → Palindrome, 123 → Not Palindrome

class Solution {
  public:
    bool isPalindrome(int n) {

        int original = n;      // store the original number.
        int reversed = 0;      // variable to build reversed number.

        while (n > 0) {
            int digit = n % 10;   // extract last digit.
            reversed = reversed * 10 + digit;  // build reversed number.
            n = n / 10;    // remove last digit.
        }

        return (original == reversed);  // check if equal.
    }
};

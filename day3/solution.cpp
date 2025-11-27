// Problem: Reverse Digits of a Number
// This function takes an integer 'n' and returns its reverse.
// Example: Input: 1234 → Output: 4321

class Solution {
  public:
    int reverseDigits(int n) {
        int reverse=0;
        int digit=0;

        while(n>0)
        {
            digit=n%10;
            reverse=reverse*10+digit;
            n=n/10;
        }
        return reverse;
    }
};

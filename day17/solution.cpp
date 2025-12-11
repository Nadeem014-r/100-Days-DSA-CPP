/*
🔢 Spy Number Check
-------------------
A number is called a Spy Number if the sum of its digits
is equal to the product of its digits.

Example:
n = 112
Digits: 1, 1, 2
Sum  = 1 + 1 + 2 = 4
Prod = 1 * 1 * 2 = 2 → Not a Spy Number

This program extracts digits, computes sum and product,
and checks if both are equal.
*/


class Solution {
  public:
    bool checkSpy(int n) {

        int sum = 0, prod = 1;          // initialize sum and product

        while (n > 0) {                 // process each digit
            int dig = n % 10;           // extract last digit
            sum += dig;                 // add to sum
            prod *= dig;                // multiply to product
            n /= 10;                    // remove last digit
        }

        return (sum == prod);           // Spy Number condition
    }
};

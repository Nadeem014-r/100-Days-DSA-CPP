class Solution {
 /*
  Armstrong Number Checker

  This program checks whether a given integer 'n' is an Armstrong number.
  An Armstrong number is a number that is equal to the sum of its digits
  each raised to the power of the total number of digits in the number.

  What this code does:
  1. Counts the number of digits in the input number.
  2. Extracts each digit and raises it to the power equal to the digit count.
  3. Sums all these powered values.
  4. Compares the sum with the original number.
     - If both match → n is an Armstrong number.
     - Otherwise → not an Armstrong number.

  Example:
     Input: 153
     Digits: 1, 5, 3 (3 digits)
     Calculation: 1³ + 5³ + 3³ = 153 → Armstrong.

  Time Complexity: O(d), where d = number of digits
  Space Complexity: O(1)

  This implementation follows a clean and easy-to-understand approach using basic loops.
*/

public:
    bool armstrongNumber(int n) {
        // Step 1: Count how many digits n has
        int count = 0;          // to store number of digits
        int result = 0;         // to store final Armstrong sum
        int temp = n;           // temporary variable to count digits
        int original = n;       // store original number for comparison
        
        // Count digits
        while (temp > 0) {
            count++;            // increase count for each digit
            temp = temp / 10;   // remove last digit
        }

        // Step 2: Reset temp to n for calculating Armstrong sum
        temp = n;

        // Calculate sum of each digit raised to 'count'
        while (temp > 0) {
            int dig = temp % 10;         // extract last digit
            result = result + pow(dig, count); // add dig^count to result
            temp = temp / 10;            // remove last digit
        }

        // Step 3: If Armstrong sum equals original number → True
        if (result == original) {
            return true;
        } else {
            return false;
        }
    }
};

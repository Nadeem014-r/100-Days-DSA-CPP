/*
    Problem: Check if a number is Prime

    Description:
    A prime number is a natural number greater than 1 
    that has no positive divisors other than 1 and itself.

    Approach:
    - If n < 2 → not prime.
    - Check divisibility from 2 to √n (i*i <= n).
    - If any number divides n, it is not prime.
    - If no divisor is found → n is prime.

    Time Complexity: O(√n)
    Space Complexity: O(1)
*/

class Solution {
  public:
    // Function to check whether a number is prime:
    bool isPrime(int n) {

        // Prime numbers start from 2.
        // 0 and 1 are not prime.
        if(n < 2) {
            return false;
        }

        /*
         Optimization:
         A number 'n' can have a divisor only up to √n.
         After √n, divisor pairs start repeating.
         So loop until i*i <= n instead of i <= n for better performance.
        */
        for(int i = 2; i * i <= n; i++) {

            // If any number divides 'n' completely,
            // then 'n' is not a prime number
            if(n % i == 0) {
                return false;
            }
        }

        // No divisors found → n is prime
        return true;
    }
};


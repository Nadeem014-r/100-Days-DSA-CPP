// Problem: Find all prime numbers in a given range [M, N].
// Approach: Loop through the range, check each number for primality using isPrime(),
//           store prime numbers in a vector, and return them in ascending order.

class Solution {
public:
    // Function to check if a number 'n' is prime
    bool isPrime(int n) {
        if(n < 2)               // Prime numbers are greater than or equal to 2
            return false;       // Numbers less than 2 are not prime
        for(int i = 2; i*i <= n; i++) {  // Loop from 2 to sqrt(n)
            if(n % i == 0)      // If 'n' is divisible by 'i'
                return false;   // 'n' is not prime
        }
        return true;            // If no divisors found, 'n' is prime
    }

    // Function to return all prime numbers between M and N (inclusive)
    vector<int> primeRange(int M, int N) {
        vector<int> ans;        // Initialize an empty vector to store primes

        for(int i = N; i >= M; i--) {   // Loop from N down to M
            if(isPrime(i))               // Check if current number 'i' is prime
                ans.push_back(i);        // If prime, add it to the vector
        }

        sort(ans.begin(), ans.end());    // Sort the vector in ascending order
        return ans;                      // Return the final list of primes
    }
};

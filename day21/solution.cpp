/*
    🔢 Happy Number Check

    A number is called a Happy Number if repeatedly replacing it with
    the sum of the squares of its digits eventually results in 1.

    Approach:
    - Extract digits one by one
    - Add squares of digits
    - Use a set to detect repetition (avoid infinite loop)

    Time Complexity: O(log n)
    Space Complexity: O(log n)
*/

class Solution {
public:
    int isHappy(int n) {
        unordered_set<int> seen;   // stores numbers we have already visited

        // run until number becomes 1 OR a repeated number is found
        while (n != 1 && !seen.count(n)) {

            // count(n) checks:
            // returns 1 → if n is already present in the set
            // returns 0 → if n is NOT present in the set
            // !seen.count(n) means → n is NOT visited yet
          
            seen.insert(n);        // mark current number as visited

            int sum = 0;          

           
            while (n > 0) {
                int digit = n % 10;  
                sum += digit * digit;  
                n = n / 10;           
            }

            n = sum;               // update n with new sum
        }

        // if n becomes 1 → happy number
        // otherwise → not a happy number
        if(n==1)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
};

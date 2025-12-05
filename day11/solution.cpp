/*
Problem: Given an integer n, return an array containing the sum of odd numbers 
         and even numbers from 1 to n. The first element of the array is the sum 
         of odd numbers, and the second element is the sum of even numbers.

Approach: 
- Initialize two variables to store the sum of odd and even numbers.
- Loop from 1 to n.
- If the number is odd, add it to the odd sum.
- If the number is even, add it to the even sum.
- Return a vector with the odd sum first, then the even sum.

Time Complexity: O(n)   // because of the loop from 1 to n
Space Complexity: O(1)  // only a few extra variables used
*/

class Solution {
public:
    vector<int> findSum(int n) {
        int oddSum = 0;   // sum of odd numbers.
        int evenSum = 0;  // sum of even numbers.
        vector<int> ans;

        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0)
                evenSum += i;  // add to even sum.
            else
                oddSum += i;   // add to odd sum.
        }

        ans.push_back(oddSum);   // first: sum of odd numbers.
        ans.push_back(evenSum);  // second: sum of even numbers.

        return ans;
    }
};

/*
    🔢 Count Even and Odd Elements in an Array

    Problem:
    Given an array, count how many elements are even
    and how many are odd.

    Approach:
    - Traverse the array once
    - Check each element using modulo (% 2)
    - Maintain separate counters for even and odd numbers

    Time Complexity: O(n)
    Space Complexity: O(1)
*/


class Solution {
  public:
    /* Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        int countEven = 0;   // counts even numbers
        int countOdd = 0;    // counts odd numbers

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0) {
                countEven++;
            } else {
                countOdd++;
            }
        }

        // return {odd count, even count}
        return {countOdd, countEven};
    }
};

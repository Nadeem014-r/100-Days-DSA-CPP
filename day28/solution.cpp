/*
-----------------------------------------
Problem: Find the Missing Number in Array
Platform: GeeksforGeeks
Approach: Mathematical sum formula (1 to n)
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long sum = 0;

        // Calculate sum of given array elements
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        long long n = arr.size() + 1;          // total numbers including missing one
        long long expected = n * (n + 1) / 2;  // sum of numbers from 1 to n

        return expected - sum;                  // missing number
    }
};

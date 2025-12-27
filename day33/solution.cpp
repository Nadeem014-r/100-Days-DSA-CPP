/*
-----------------------------------------
Problem: Count Frequency of an Element in Array
Approach: Linear traversal
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int i = 0;
        int count = 0;

        while(i < arr.size()) {
            if(arr[i] == target) {
                count++;        // count occurrence
            }
            i++;                // move to next element
        }

        return count;
    }
};

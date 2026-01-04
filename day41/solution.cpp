/*
--------------------------------------------------
Day 41 – Move All Zeros to End of Array
Problem: Move All Zeroes to End
Platform: GeeksforGeeks / LeetCode

Approach:
- Traverse the array and shift all non-zero elements to the front
- Fill the remaining positions with zeros
- Order of non-zero elements is preserved

Time Complexity: O(n)
Space Complexity: O(1)
--------------------------------------------------
*/
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int idx = 0;   // position to place next non-zero....

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] != 0) {
                arr[idx] = arr[i];
                idx++;
            }
        }

        //fill remaining positions with zeros.....
        while(idx < arr.size()) {
            arr[idx] = 0;
            idx++;
        }
        
    }
};

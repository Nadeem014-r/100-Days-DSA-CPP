/*
--------------------------------------------------
Day 40 – Optimized Remove Duplicates from Sorted Array
(Modification of Day 39)

Problem: Remove Duplicate Elements from Sorted Array
Platform: GeeksforGeeks

Modification:
- Day 39 used set (O(n log n), extra space)
- Day 40 optimized using two-pointer technique
- Preserves order and improves efficiency

Approach:
- Compare current element with previous unique element
- Store only unique values

Time Complexity: O(n)
Space Complexity: O(1)
--------------------------------------------------
*/

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> ans;
        
        if(arr.size() == 0)
            return ans;

        ans.push_back(arr[0]);   // first element is always unique

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[i - 1]) {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};

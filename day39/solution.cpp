/*
--------------------------------------------------
Day 39 – Remove Duplicates from Array
Problem: Remove Duplicate Elements
Platform: GeeksforGeeks

Approach:
- Used a set to store unique elements
- Converted the set back to a vector

Note:
- This approach removes duplicates but changes order
- Chosen for clarity; will be optimized later

Time Complexity: O(n log n)
Space Complexity: O(n)
--------------------------------------------------
*/

class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        set<int>s1(arr.begin(),arr.end());
        
        for(auto it: s1)
        {
            ans.push_back(it);
        }
        
        return ans;
    }
};

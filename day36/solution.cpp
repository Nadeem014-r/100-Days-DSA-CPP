/*
--------------------------------------------------
Problem: Segregate Positive and Negative Elements
Platform: GeeksforGeeks

Requirement:
- All positive elements should appear first
- All negative elements should appear after positives
- Relative order of elements must be preserved

Approach:
- Store positive and negative elements in separate arrays
- Copy positives first, then negatives back to original array

Time Complexity: O(n)
Space Complexity: O(n)
--------------------------------------------------
*/

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos, neg;

        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >= 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }

        // Put positives first
        int idx = 0;
        for(int x : pos)
        {
            arr[idx] = x;
            idx++;
        }
        // Then negatives  (order preserved)
        for(int x : neg)
        {
            arr[idx] = x;
            idx++;
            
        }
    }
};

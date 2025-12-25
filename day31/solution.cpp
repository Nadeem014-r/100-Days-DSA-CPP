/*
-----------------------------------------
Problem: Minimum and Second Minimum Element
Platform: GeeksforGeeks
Approach: Single pass comparison
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int>& arr) {
        
        if(arr.size() < 2)
            return {-1};                 // not possible
        
        int first = INT_MAX;             // smallest element
        int second = INT_MAX;            // second smallest element
        
        // Find smallest and second smallest
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < first) {
                second = first;
                first = arr[i];
            }
            else if(arr[i] > first && arr[i] < second) {
                second = arr[i];
            }
        }
        
        // If second smallest doesn't exist
        if(second == INT_MAX)
            return {-1};
        
        return {first, second};          // return result as vector
    }
};

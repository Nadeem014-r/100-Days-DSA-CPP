/*
-----------------------------------------
Find Duplicate Elements in Array
Platform: GeeksforGeeks
Approach: Hashing (Frequency Array)
Time Complexity: O(n)
Space Complexity: O(n)
-----------------------------------------
*/

class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        
        vector<int> ans;              // stores duplicate elements
        vector<int> hash(n + 1, 0);   // frequency array
        
        // Count frequency of each element
        for(int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }
        
        for(int i = 0; i <= n; i++) {
            if(hash[i] == 2) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};

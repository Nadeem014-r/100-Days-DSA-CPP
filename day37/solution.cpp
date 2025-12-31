/*
--------------------------------------------------
Problem: Find the Union of Two Arrays
Platform: GeeksforGeeks

Approach:
- Use a set to store unique elements
- Insert elements from both arrays into the set
- Convert the set into a vector to get the union

Why Set:
- Automatically removes duplicates
- Maintains sorted order

Time Complexity: O((n + m) log(n + m))
Space Complexity: O(n + m)
--------------------------------------------------
*/

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1;
        
        
        for(int i=0;i<a.size();i++)
        {
            s1.insert(a[i]);
        }
        
        for(int i=0;i<b.size();i++)
        {
            s1.insert(b[i]);
        }
        
        
        vector<int>ans(s1.begin(),s1.end());  // copy all elments from set to vector.
        
        return ans;
        
        
    }
};

/*
--------------------------------------------------
Day 38 – Intersection of Two Arrays
Problem: Find the Number of Common Elements in Two Arrays
Platform: GeeksforGeeks

Approach:
- Store unique elements of both arrays using sets
- Traverse one set and check existence in the other
- Count elements that are present in both sets

Why Set:
- Automatically removes duplicates
- Provides fast lookup using count()

Time Complexity: O((n + m) log(n + m))
Space Complexity: O(n + m)
--------------------------------------------------
*/

class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        
        set<int>s1(a.begin(),a.end());
        set<int>s2(b.begin(),b.end());
      
        int count1=0;
        
        for(auto it:s1)
        {
            if(s2.count(it)==1) // checks if it is present in s2.
            {
                count1++;
            }
        }
        
        
        return count1;
    }
};

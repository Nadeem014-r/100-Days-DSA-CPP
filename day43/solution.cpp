/*
--------------------------------------------------
Day 43 – First Repeated Element in an Array
Problem: Find the First Repeating Element
Platform: GeeksforGeeks

Approach:
- Used hashing to count frequency of elements
- Traversed the array again to find the first element
  whose frequency is greater than one

Note:
- Returned 1-based index as required by the problem

Time Complexity: O(n)
Space Complexity: O(n)
--------------------------------------------------
*/

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> freq;

        // count frequency of each element.......
        for(int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        // find first element with frequency > 1.....
        for(int i = 0; i < arr.size(); i++)
        {
            if(freq[arr[i]] > 1)
            {
                return i + 1;   // 1-based index
            }
        }

        return -1;  // no repeated element......
    }
};

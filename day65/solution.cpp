/*
--------------------------------------------------
Day 65 – Find All Permutations of a String
Problem: Permutations of a String
Platform: GeeksforGeeks

Approach:
- Used recursion with backtracking
- Fixed one character at a time and permuted the rest
- Swapped characters to explore all possibilities
- Backtracked after each recursive call
- Sorted the final result as required

Learning Focus:
- Introduction to backtracking
- Understanding choose → explore → backtrack pattern

Time Complexity: O(n * n!)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    void solve(int idx, string &s, vector<string> &ans) {
        if (idx == s.size()) {
            ans.push_back(s);
            return;
        }

        unordered_set<char> used;   // avoid duplicate swaps at this level.....

        for (int i = idx; i < s.size(); i++) {
            if (used.count(s[i])) continue;

            used.insert(s[i]);
            swap(s[idx], s[i]);
            solve(idx + 1, s, ans);
            swap(s[idx], s[i]);   // backtrack.....
        }
    }

    vector<string> findPermutation(string &s) {
        vector<string> ans;
        solve(0, s, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

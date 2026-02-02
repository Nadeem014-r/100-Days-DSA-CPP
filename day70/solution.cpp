// Generate Binary Strings (Recursion)
//
// Idea:
// At each step, we have two choices:
// append '0' or append '1'.
//
// Base Case:
// When the current string length
// becomes equal to n, store it.
//
// Key Learning:
// This problem demonstrates decision-based
// recursion with a simple recursion tree.


class Solution {
  public:
    void solve(int n, string curr, vector<string>& ans) {
        // base case
        if (curr.length() == n) {
            ans.push_back(curr);
            return;
        }

        // choice 1: add '0'
        solve(n, curr + '0', ans);

        // choice 2: add '1'
        solve(n, curr + '1', ans);
    }

    vector<string> binstr(int n) {
        vector<string> ans;
        solve(n, "", ans);
        return ans;
    }
};

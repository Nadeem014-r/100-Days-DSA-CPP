/*
    🔢 Decimal to Binary Conversion
    --------------------------------
    Logic:
    - Binary is base 2
    - Repeatedly divide the number by 2
    - Store the remainder (0 or 1) each time
    - Read/store remainders in reverse order to get binary

    Example:
    13 → 1101
    (remainders: 1, 0, 1, 1 from bottom to top)

    Time Complexity: O(log n)
    Space Complexity: O(log n)
*/
class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string binary="";
        while(n>0)
        {
            int dig=n%2;  // find remainder when divided by 2.
            binary=to_string(dig)+binary;// add remainder at the front of binary string.
            n=n/2;
        }
        
        return binary;
    }
};

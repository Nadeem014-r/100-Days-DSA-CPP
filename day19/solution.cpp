/*
    🔢 Binary to Decimal Conversion
    --------------------------------
    Approach:
    - Binary input is given as a string
    - Process bits directly from right to left
    - Use powers of 2 (bit shifting) for conversion
    - Note: Avoid converting binary string to decimal integer

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int fxn(string &b)
    {
        int track = 0;        // keeps track of power of 2 (bit position)
        int result = 0;    // stores decimal value

        // traverse binary string from right to left
        for (int i = b.size() - 1; i >= 0; i--)
        {
            int dig = b[i] - '0';       // convert char to integer (0 or 1)
            result += (1 << track) * dig;  // add corresponding power of 2
            track++;                       // move to next bit position
        }
        return result;                  // final decimal number
    }

    int binaryToDecimal(string &b) {
        return fxn(b);                  // call helper function
    }
};

// Day 2 - Counting Digits of a Number
// -----------------------------------
// Problem: Given an integer n, count how many digits it contains.
// Example: n = 345 → output = 3
// Note: If n = 0, the digit count should be 1.

class Solution {
  public:
    int countDigits(int n) {
        int count=0;
        if(n==0) //if the given number is 0;
        {
            return 1;
        }
        while(n>0){ 
        n=n/10;  //remove last digit from number;
        count++;  // increase count;
        }
       return count;
    }
};

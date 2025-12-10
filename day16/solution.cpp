/*
🧮 Strong Number Check
----------------------
A number is called a Strong Number if the sum of the factorials of its digits 
is equal to the original number.

Example:
145 → 1! + 4! + 5! = 145 → Strong Number

This code extracts each digit, computes its factorial, 
adds them up, and checks if the number is Strong.
*/
class Solution {
  public:

  int prod = 1;   // used to calculate factorial

  // function to calculate factorial of a digit
  int calFact(int n)
  {
      prod = 1;                 // important: reset factorial for each call

      for (int i = 1; i <= n; i++)   // loop to calculate factorial
      {
          prod = prod * i;
      }

      return prod;
  }

    int isStrong(int N) {
        int num = N;            // copy original number
        int sum = 0;            // will store sum of factorials of digits

        while (num > 0)         // extract digits one by one
        {
            int dig = num % 10;     // get last digit
            int k = calFact(dig);   // factorial of that digit
            sum += k;               // add factorial to sum
            num = num / 10;         // move to next digit
        }
        
        
          // check if number is Strong Number
        if(sum==N)
        {
            return 1;
        }else
        {
            return 0;
        }
    }
};

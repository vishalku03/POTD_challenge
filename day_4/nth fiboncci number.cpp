#include <bits/stdc++.h>

int fibonacciNumber(int n)
{

     // Write your code here.

     int mod = 1000000007;

     int a = 0;

     int b = 1;

     int i = 0;

     while (i < n - 1)
     {

          int sum = (a % mod + b % mod) % mod;

          a = b;

          b = sum;

          i++;
     }

     b = b % mod;

     return b;
}
// coding  ninjas
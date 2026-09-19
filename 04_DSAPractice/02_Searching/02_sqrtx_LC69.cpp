/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator..*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        //Method 1: Basic MathTC = O(root(x)), SC = O(1)
        for(int i=1; i<=x; i++){
            if(i==x/i){
                return i;
            }
            else if (i>x/i){
                return i-1;
            }
            
        }
        //return 0;

        //=========================================

        // Method 2: Binary Search -> TC=O(logx), SC=O(1)
        if (x < 2) return x;

        long long lo = 1;
        long long hi = x / 2;
        int ans = 1;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;

            if (mid * mid <= x) {
                ans = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }

        //return ans;

        //=========================================

        //Method 3: Newton's Method -> TC=O(logx), SC=O(1)
        if (x < 2) return x;

        long long n = x;

        while (n * n > x) {
            n = (n + x / n) / 2;
        }

        //return n;
    }
};
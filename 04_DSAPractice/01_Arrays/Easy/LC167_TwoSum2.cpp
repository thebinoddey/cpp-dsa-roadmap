/*You are given a 1-indexed array of integers numbers that is already sorted in non-decreasing order.

Find two numbers such that they add up to a specific target number. */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int lo=1, hi=n;
        while(lo<=hi){
            if(numbers[lo-1]+numbers[hi-1] > target) hi--;
            else if(numbers[lo-1]+numbers[hi-1] < target) lo++;
            else{
                return {lo,hi};
            }
        }
    return {lo,hi};   
    }
};
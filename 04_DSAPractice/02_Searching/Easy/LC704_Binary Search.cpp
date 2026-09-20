/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(target < nums[mid]){
                hi = mid-1;
            }
            else if (target > nums[mid]){
                lo = mid + 1;
            }
            else if (target == nums[mid]){
                return mid;
            }
        }
        return -1;
    }
};
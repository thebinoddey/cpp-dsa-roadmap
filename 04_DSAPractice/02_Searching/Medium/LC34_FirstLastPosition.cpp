/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int ff(vector<int>& nums, int target){
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int ans = -1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(target < nums[mid]) hi=mid-1;
                else if (target>nums[mid]) lo = mid+1;
                
                else {
                    ans = mid;
                    hi = mid-1; 
                }
            }
            return ans;
        }

        int fl(vector<int>& nums, int target){
            int n = nums.size();
            int lo = 0;
            int hi = n-1;
            int ans = -1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(target < nums[mid]) hi=mid-1;
                else if (target>nums[mid]) lo = mid+1;
                
                else {
                    ans = mid;
                    lo = mid+1; 
                }
            }
            return ans;
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = ff(nums,target);
        int last = fl(nums, target);

        vector<int> sol;
        sol.push_back(first);
        sol.push_back(last);

        return sol;
        }

};
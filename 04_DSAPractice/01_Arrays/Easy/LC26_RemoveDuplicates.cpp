/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
        int first = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != val){
                nums[first] = nums[i];
                first++;
            }
        }
        return first;
    }
    
};
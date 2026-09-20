/*You are given two integer arrays nums1 and nums2 of sizes n and m, respectively. Calculate the following values:

answer1 : the number of indices i such that nums1[i] exists in nums2.
answer2 : the number of indices i such that nums2[i] exists in nums1.
Return [answer1,answer2].*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        //TC = O(nm) , SC=O(1)
        vector<int>ans;
        int s1 = 0;
        int s2 = 0;
        for(int x:nums1){
            for(int y:nums2){
                if(x==y){
                    s1++;
                    break;
                } 

            }
        }

        for(int x:nums2){
            for(int y:nums1){
                if(x==y){
                    s2++;
                    break;
                }  
            }
        }
        ans.push_back(s1);
        ans.push_back(s2);
        
        //return ans;

        //===========================

        //Method 2: Using unordered sets -> TC = O(n+m) , SC=O(n+m)
        
        unordered_set<int> us1(nums1.begin(), nums1.end());
        unordered_set<int> us2(nums2.begin(), nums2.end());

        int count1 = 0;
        int count2 = 0;

        for(int x : nums1) {
            if(us2.count(x))
                count1++;
        }

        for(int x : nums2) {
            if(us1.count(x))
                count2++;
        }

        // return {count1, count2};
    }
};
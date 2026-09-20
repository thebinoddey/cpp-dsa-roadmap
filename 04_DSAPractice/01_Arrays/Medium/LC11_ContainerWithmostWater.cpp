/*Return the maximum amount of water a container can store.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxarea = 0;

        while(left<right){
            int area = min(height[right], height[left]) * (right-left);
            if(area>maxarea) maxarea = area;
            
            if(height[left]<height[right]) left++;
            else right --;
        }
        return maxarea;
    }
};
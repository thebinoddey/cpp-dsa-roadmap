#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Reverse entire array
        int i = 0, j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }

        // Reverse first k elements
        for (int i = 0, j = k - 1; i < j; i++, j--) {
            swap(nums[i], nums[j]);
        }

        // Reverse remaining elements
        for (int i = k, j = n - 1; i < j; i++, j--) {
            swap(nums[i], nums[j]);
        }

        //-----------------------------------------

        //Method2: Extra ARray (TC = O(n) and SC = O(n))
        vector<int> temp(n);
        for(int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        nums = temp;

        //-----------------------------------------

        //Method3: One-by-one rotation (TC = O(n) and SC = O(1))
        while(k--){
            int last = nums[n-1];
            for(int i = n - 1; i > 0; i--){
                nums[i] = nums[i-1];
            }
            nums[0] = last;
        }
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 10;
    rotate(nums, k);
}
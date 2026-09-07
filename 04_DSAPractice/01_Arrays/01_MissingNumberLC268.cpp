#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums) {
    //Method1: Basic Math
    int n = nums.size();
    int sum = n * (n+1) / 2;
    int vsum = 0;
    for(int i=0; i<n; i++){
        vsum += nums[i];
    }
    return sum - vsum;

    //-----------------------------------------

    //Method2: XOR Approach (TC = O(n) and SC = O(1))
    int ans = n;
    for(int i = 0; i < n; i++) {
        ans ^= i;
        ans ^= nums[i];
    }

    // return ans;

    //-----------------------------------------

    //Method3: Sorting (TC = O(n logn) and SC = O(logn))
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != i)
            return i;
    }
    // return nums.size();

    //-----------------------------------------

    //Method4: Boolean Array (TC = O(n) and SC = O(n))
    vector<bool> present(n + 1, false);
    for(int x : nums) {
        present[x] = true;
    }
    for(int i = 0; i <= n; i++) {
        if(!present[i])
            return i;
    }

    // return -1;
}

int main() {
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);
}
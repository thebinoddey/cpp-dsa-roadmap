#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    //Method 1: TC = O(n) and SC = O(n)
        int n = digits.size();
        int carry = 1;
        vector<int> ans;
        for(int i = n-1; i>=0; i-- ){
            int sum = carry + digits[i];
            if(sum<10){
                carry = 0;
                ans.push_back(sum);
            }
            else{
                carry = 1;
                ans.push_back(0);
            }
        }
        if(carry==1) ans.push_back(1);

        reverse(ans.begin(), ans.end());
        //return ans;

        //Method2: Modify digits in place -> TC = O(n) and SC = O(1)
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;

    }

int main() {
    vector<int> dig={1,2,1,9};

    vector<int> zig = plusOne(dig);
    for(int e:zig){
        cout <<e << " ";
    }
}
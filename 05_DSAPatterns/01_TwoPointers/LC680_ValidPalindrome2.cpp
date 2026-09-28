#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    bool check(string& s, int first, int last){
        while(first<=last){
            if(s[first]!=s[last])
                return false;

            first++;
            last--;
        }
        return true;
        }
    bool validPalindrome(string s) {
        int n = s.length();
        int first = 0;
        int last = n-1;

        while(first <= last){
            if(s[first] == s[last]){
                first++;
                last--;
            }

            else {
                return check(s, first+1, last) || check(s,first, last-1);
            }
        }
        return true;
    }
};
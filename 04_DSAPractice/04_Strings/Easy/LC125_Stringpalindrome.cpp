//Check if string is palindrome or not (alphanumeric)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int first = 0;
        int last = n-1;

        while(first<=last){
            char x = s[first]; 
            char y = s[last];

            //ASCII Values
            /* 1. Digits(0-9) = 48 to 57
               2. Letters(A-Z) = 65 to 90
               3. Letters (a-z) = 97 to 122
               4. Space = 32
               
               If we add 32 to any Uppercase letter, it becomes lowercase ASCII*/
            if(x>=65 && x<=90) x+=32;
            if(y>=65 && y<=90) y+=32;

            bool ValidX = (x<97 || x>122 || x==32) && (x<48 || x>57);
            bool ValidY = (y<97 || y>122 || y==32) && (y<48 || y>57);
            
            if(ValidX) first++;
            else if(ValidY) last--;
            else {
                if(x!=y) 
                    return false;

                first++; last--;
            }
        }
        return true;
    }
};
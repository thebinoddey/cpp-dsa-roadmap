#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int n = s.length();
        vector<int>freq(26,0);
        for(char ch : s){
            int idx = ch - 97;
            freq[idx]++;
        }
        for(char ch : s){
            if(freq[ch - 97] == 1)
                return (char)(ch);
        }
        
        return '$';
    }
    
};
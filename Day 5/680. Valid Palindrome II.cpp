#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    bool isPalindrome(const string& s, int left, int right) {
            while (left < right) {
                if (s[left] != s[right]) return false;
                left++;
                right--;
            }
            return true;
    }
public:
    bool validPalindrome(string s) {
        int n = s.size();
        
        int i = 0, j = n - 1;
        
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
        }
        
        return true;
    }
};

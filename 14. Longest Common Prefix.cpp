#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) return "";
        int n = strs.size();
        int k = 0;
        string ans =strs[0];
        while(k < n-1){
            string first = strs[k];
            string second = strs[k+1];

            int i = 0;
            string temp = "";
            while(i < first.size() && i < second.size() && first[i] == second[i]){
                temp += first[i];
                i++;
            }

            if(temp.size() < ans.size()){
                ans = temp;
            }
            k++;
        }

        return ans;
    }
};
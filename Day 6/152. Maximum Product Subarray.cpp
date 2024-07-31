#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double pre = 1;
        double suff = 1;
        double ans = INT_MIN;
        int n = nums.size();
        for(int i = 0 ; i < n;i++){
            if(pre == 0) pre = 1;
            // if(suff == 0) suff = 1;
            pre = pre*nums[i];
            // suff = suff*nums[n-i-1];
            ans = max(ans,pre);
        }

        for(int i = 0 ; i < n;i++){
            // if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;
            // pre = pre*nums[i];
            suff = suff*nums[n-i-1];
            ans = max(ans,suff);
        }

        return ans;
    }
};
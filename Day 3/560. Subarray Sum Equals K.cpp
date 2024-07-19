#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        mpp[0] = 1;
        for(int i = 0 ; i < n ;i++){
            sum += nums[i];
            int rem = sum - k;
            if(mpp.find(rem) != mpp.end()){
                ans += mpp[rem];
            }
            mpp[sum]++;
        }
        return ans;
    }
};
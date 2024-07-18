#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> mpp;
        int ans = 0;
        int sum = 0;
        int n = nums.size();
        mpp[0] = 1; 
        for (int i = 0; i < n; i++) {
            sum += nums[i];

            int rem;
            // Calculate remainder and handle negative remainders
            if(sum > 0) rem = sum % k;
            else rem = (sum%k + k) % k;

            if (mpp.find(rem) != mpp.end()) {
                ans += mpp[rem];
            }

            mpp[rem]++;
        }

        return ans;
    }
};
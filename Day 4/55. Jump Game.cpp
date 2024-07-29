#include<bits/stdc++.h>
using namespace std;
#include <vector>
using namespace std;

class Solution {
private:
    bool isPossible(vector<int>& nums, int ind, vector<int>& memo) {
        if (ind >= nums.size() - 1) return true;
        if (memo[ind] != -1) return memo[ind];
        if (nums[ind] == 0) return false;

        for (int i = 1; i <= nums[ind]; ++i) {
            if (isPossible(nums, ind + i, memo)) {
                return memo[ind] = true;
            }
        }
        

        return memo[ind] = false;
    }

public:
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        return isPossible(nums, 0, memo);
    }
};
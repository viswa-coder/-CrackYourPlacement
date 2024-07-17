#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNonzerfoundat = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                nums[lastNonzerfoundat] = nums[i];
                lastNonzerfoundat++;
            }
        }

        for(int i = lastNonzerfoundat ; i < n ; i++){
            nums[i] = 0;
        }
    }
};
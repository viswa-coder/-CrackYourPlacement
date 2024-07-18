#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();

       if(n <= 1) return n;

       int pos = 0;
       for(int i = 1 ; i < n ; i++){
        if(nums[pos] != nums[i]){
            nums[pos+1] = nums[i];
            pos++;
        }
       }
       return pos+1;
    }
};
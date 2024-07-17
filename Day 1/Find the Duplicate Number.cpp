#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Floyd's Tortoise and Hare (Cycle Detection) algorithm
        int slow = 0;
        int fast = 0;

        do{
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
        }while(slow != fast);

        slow = 0;
       do{
            slow = nums[slow];
            fast = nums[fast];
        }while(slow != fast);

        return slow;

    }
};
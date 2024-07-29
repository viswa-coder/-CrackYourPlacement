#include<bits/stdc++.h>
using namespace std;
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore Voting Algo
        int cnt = 0;
        int element = 0;
        for(int i =0 ; i < nums.size();i++){
            if(cnt == 0) {
                cnt = 1;
                element = nums[i];
                }
            else if(nums[i] == element) cnt += 1;
            else cnt -= 1;
        }
        return element;
    }
};
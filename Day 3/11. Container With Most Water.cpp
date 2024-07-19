#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        //Checking for every possible width of 1 -> n trying to get maximum possible length and therfore will maximize area (so we are eventually maximizing the area for every possible combo)
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i < j){
            int area = (j-i)*min(height[j],height[i]);
            ans = max(area,ans);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return ans;
    }
};
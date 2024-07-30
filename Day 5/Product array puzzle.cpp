#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
       vector<long long int>prefix(n,1);
       vector<long long int>suffix(n,1);
       vector<long long int>ans(n,1);
       
       for(int i = 0 ; i < n -1;i++){
           prefix[i+1] = prefix[i]*nums[i];
       }
       
       for(int i = n-1 ; i > 0 ; i--){
           suffix[i-1] = suffix[i]*nums[i];
       }
       
       for(int i = 0 ; i < n ;i++){
           ans[i] = prefix[i]*suffix[i];
       }
       
       return ans;
    }
};
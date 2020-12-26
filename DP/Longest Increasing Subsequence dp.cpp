class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
          if(nums.empty()){
              return 0;
          }
        int ns = nums.size();
        vector<int>dp(ns,1);
        int n = dp.size();
    
        
        for(int i =1;i<n;i++){
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};
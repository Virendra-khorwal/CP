class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // In case the vector is only 1 element
        int best = nums[0];
        // Calculate local sum
        int sum = 0;
        
        for (int i =0;i < nums.size(); ++i ){
            // Either include number to current sum or restart and begin new sum
            sum = max(nums[i], sum + nums[i]);
            // Find global max
            best = max(sum, best);
        }
        
        return best;        
    }
};
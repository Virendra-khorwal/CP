class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int  n= nums.size();
        int sum =0;
        for(auto x : nums){
            sum += x;
        }
    return n*(n+1)/2 - sum;
    }
};

/*

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =0;
        int x= nums.size();
        sort(nums.begin(),nums.end());
        for(int i= 0;i<x;i++){
        if(nums[i] != i){
         n = i;
         return n;

            
        }
            
        }
 return x;
    }
    
};
*/
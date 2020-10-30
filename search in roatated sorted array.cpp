class Solution {
public:
    int search(vector<int>& nums, int target) {
        

        if (nums.size() == 1) {
            if (nums[0] == target)
                return 0;
            else
                return -1;
        }
        
        size_t left = 0, right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] == target) {
                return left;
            } else if (nums[right] == target) {
                return right;
            }
            left++;
            right--;
        }

        return -1;
    }
};


//another one----

class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i = 0 ;i< nums.size();++i){
            mp[nums[i]] = i;
        }
        
        sort(nums.begin(),nums.end());
        
        int left = 0;
        int right = nums.size() -1 ;
    
    while(left <= right ){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            return mp[nums[mid]];
        }
            else if(nums[mid] > target){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
    }
    
};//somehow sloww
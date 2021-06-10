class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        int count;
        int maxi = 0;
        int m;
        int c;  
       
        
        for(int i=0;i<nums.size();i++)
        {
            count = 0;
            m = nums[i];
           
                              
            do
            {    
                m = nums[m];
                count++;
            }
            
            while( m!= nums[i]);
           maxi = max(maxi,count); 
        } 
             
    return maxi;
    }                   
};
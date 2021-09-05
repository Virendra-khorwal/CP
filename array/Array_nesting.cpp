/* Optimal solution TLE*/
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

/* o(n)logic */

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
     
    int maxi =0;
    int k;    
 
        for(int i=0;i<nums.size();i++)
        {
            int k = i;
            int count =0;
            
            if(nums[i] != -1)
            {
                while(nums[k] != -1)
                {
                   int y = nums[k];
                    nums[k] = -1;
                    k= y;
                    count++;
                }
            }
          maxi = max(count, maxi);  
        }
      return maxi;  
    }
};
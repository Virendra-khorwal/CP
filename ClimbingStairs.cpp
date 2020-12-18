class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(n+1,0);
        v[0] = 1;
        v[1] = 1;
       
    for(int i = 2; i <= n ;i++){
     v[i] = v[i-1] + v[i-2];
   
      
    }
       return v[n];
    }
  
};

/*class Solution {
public:
    int climbStairs(int n) {
      int fn1 = 1;
      int fn2 = 1;
       int fn =1; 
       
 for(int i = 2;i<= n ;i++){
     fn = fn1 + fn2;
     fn1 = fn2;
     fn2 = fn;
 }
        
   
      
    
       return fn;
    }
  
};
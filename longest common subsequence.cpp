class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
      int x = text1.length();
        int y = text2.length();
        int DP[x+1][y+1];
        
        
            
           for(int i = 0;i<=x;i++){
            for(int j = 0;j<=y;j++){
                
                if(i ==0 || j==0){
                    DP[i][j] = 0;
                }
             else if(text1[i-1]==text2[j-1]){
                    DP[i][j] = 1+DP[i-1][j-1];
                }
                else{
                    DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
        return DP[x][y];
    }
};
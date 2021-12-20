class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mini = 1000;
        int count;
        int maxi = 1000;
        string m;
        string ans;
        
        
//         finding minimum lenth str;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length() < mini){
                mini = strs[i].length();
                m = strs[i];
            }
        }
        
        for(int i=0;i<strs.size();i++){
            count =0;
            for(int j=0;j<m.size();j++){
                
                if(strs[i][j] == m[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            maxi = min(count,maxi);
            
        }
        for(int i=0;i<maxi;i++){
            char s = m[i];
            ans.push_back(s);
        }
    

     return ans;   
    }    
};
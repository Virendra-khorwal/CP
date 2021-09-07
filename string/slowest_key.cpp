class Solution {
public:
    char slowestKey(vector<int>& rT, string keysPressed) {
        int maxi = rT[0];
        char index = keysPressed[0];
        int diff;
        
        for(int i=1;i<rT.size();i++){
            diff = rT[i] - rT[i-1];
            
            if(diff>maxi){
                maxi = diff;
                index = keysPressed[i];
            }
            else if (diff == maxi)
            {
                    index = max(index, keysPressed[i]);
            }
        }
     return index;   
    }
};
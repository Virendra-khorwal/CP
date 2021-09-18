class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        int sbo = '(';
        int sbc = ')';
        int cbo = '{';
        int cbc = '}';
        int sqbo = '[';
        int sqbc = ']';
        int l = s.size()-1;
      
      for(int i=0;i<s.size();i++){
        
        if(stk.empty()){
          stk.push(s[i]);
        }
             
        else if(s[i] == sbc && stk.top() == sbo || s[i] == cbc && stk.top() == cbo || s[i] == sqbc && stk.top() ==sqbo){
            stk.pop(); 
        }
        else{
            stk.push(s[i]);
        }
        }
        
        if(stk.empty()){
         return true;
        }
    
        else{
         return false;
                }             
             }
        };
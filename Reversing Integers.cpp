class Solution {
public:
    int reverse(int x) {
       int carry;
        long sum = 0;
        while(x != 0 ){
        carry = x%10;
        x = x/10;
        sum = carry + sum*10;
        }
                if(sum > pow(-2,31) && sum < pow(2,31)-1){
    
        return sum;
                }
        else{
            return 0;
        }
    }
};
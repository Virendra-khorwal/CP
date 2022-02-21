int sumofDigits(int n)
{
    int sum = 0;
    if(n<10){
        return n;
    }
        while(n){
            sum += n%10;
            n = n/10;
        }
    n = sum;
    	
    	return sumofDigits(n);
    }
	// Write your code here.

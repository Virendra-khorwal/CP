long long int maximumPoints(long long int x, long long int y, long long int m)
{
    long long int count =0;
     long long int remainx =0;
     long long int remainy =0;
    long long int a ;
	// Write your code here.
    if(m>x){
        count+= x;
    }
    else{
        while(x>=m){
            count+= m;
            x = x-m;
        }
        remainx = x;
    }
    
    if(m>y){
        count+= y;
    }
    else{
        while(y>=m){
            count+= m;
            y = y-m;
        }
        remainy = y;
    }
    if(remainx+remainy >= m){
        a = min(m-remainx, m-remainy);
        count += m-a;
    }
    return count;
}

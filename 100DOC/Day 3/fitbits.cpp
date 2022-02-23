int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
    int currsum =0;
    int maxsum =0;
    int count =0;
    
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
            arr[i] = -1;
        }
        else{
            arr[i] = 1;
        }
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        
        if(currsum<0) currsum=0;

    }
    return count + maxsum;
}
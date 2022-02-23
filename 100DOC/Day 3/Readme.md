Problem 1: [Pair Sum](https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280152?leftPanelTab=0)

Solution:
```c++

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>v;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==s){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                v.push_back(temp);
            }
        }
    }
    
    return v;
}

```


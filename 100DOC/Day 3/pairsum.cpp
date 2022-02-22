vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.

    vector<vector<int>>a;
    vector<int>b;
    for(int i=0;i<arr.size();i++){
        b.clear();
        for(int j=i+1;j<arr.size();j++){
            int target = s-arr[i];
            if(target == arr[j]){
                b.push_back(min(arr[i],arr[j]));
                b.push_back(max(arr[j], arr[i]));
                a.push_back(b);
            }
            
            }
    }
    sort(a.begin(),a.end());
    return a;
}
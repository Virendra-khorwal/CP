#include<bits/stdc++.h>
vector<int> countChocolates(int n, int k, vector<int> chocolates)
{
    // Write your code here.
    int no = n-k+1;
    set<int>s;
    vector<int>v;
    
    for(int i=0;i<chocolates.size()-k+1;i++){
        for(int j=i;j<i+k;j++){
            s.insert(chocolates[j]);
        }
        v.push_back(s.size());
        s.clear();
    }
    
    return v;
}

Problem 1: [Container With Most Water](https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280150?leftPanelTab=0)

Solution:
```c++

#include<bits/stdc++.h>

int maxArea(vector<int>& height)
{
   int n = height.size();
   int l=0;
   int r = n-1;
   int maxAr = 0;
   while(l<r){
       
       int area = min(height[l],height[r])*(r-l);
       maxAr = max(maxAr,area);
       if(height[l]<height[r]){
           l++;
       }
       else{
           r--;
       }
   }
   return maxAr;

}

```


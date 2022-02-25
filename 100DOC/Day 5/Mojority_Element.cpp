https://www.codingninjas.com/codestudio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280156?leftPanelTab=1

#include<bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int ans;
    int x = n/2;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
  	m[arr[i]]++;
        
}
 
    for (auto i:m){
        if(i.second > x){
            return i.first;
        }
    }
     return -1;   
    
}    



// Another solution but TLE

#include<bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int ans;
    int x = n/2;
    
    for(int i=0;i<n;i++){
  
        int m = count(arr, arr+n, 1);
        if(m>x){
           return arr[i]; 
            break;
        }
    }
    return -1;
}
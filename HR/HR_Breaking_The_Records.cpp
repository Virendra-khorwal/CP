#include<bits/stdc++.h>

using namespace std;

int main(){
 
 int n;
 int x;
 int minr =0;
 int maxr =0;
 vector<int>vec;
 cin>> n;
 
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    
int maxi = vec[0];
int mini = vec[0];

    for(int i= 1;i<n;i++){
        if(vec[i]>maxi){
            maxi = vec[i];
            maxr++;
        }
    }
    
    for(int i=0;i<n;i++){
           if(vec[i]<mini){
            mini = vec[i];
            minr++;
        }
    }
    
    cout <<maxr << " "<<minr; 
    
}
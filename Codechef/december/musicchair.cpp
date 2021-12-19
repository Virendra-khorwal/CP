#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int n;
    int count;
    cin>>t;

    while(t--){
        cin>>n;
        count = 1;
    
        for(int i=1;i<n/2+1;i++){
           if((n-1)%i==0){
               count++;
           }
        }
            if(n == 2){
            count = 1;
        }
          cout<<count<<endl;  
        }
    
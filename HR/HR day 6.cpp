#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin>>a;
        string se;
        string so;
    for(int i =0;i<a.length();i++){
        
        if(i%2 == 0){
            se += a[i];
        }
        else{
            so += a[i];
        }
       }
       cout <<se << " "<<so<<endl; 
    
}}

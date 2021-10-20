#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int size;
    int flag;
    
    while(t--){
       cin>>size;
       flag =0;
       string ds;
       cin >> ds;       
      
      for(int i=0; i<size; i++){
          if(ds[i]== ds[i+1]){
              flag = 1;
          }
      }
      if(flag==1){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
    }
}

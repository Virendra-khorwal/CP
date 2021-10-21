#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y;
    int total;
    int ans;
    while(t--){
        total = 0;
        cin>>x>>y;
        total = y-x;

        if(x>y){
            ans = y-x;
        }
        else if((total%2)==0){
            ans = total/2;
        }
        else{
            ans = total/2 + 2;
        }
        cout<<ans<<endl;
    }
}
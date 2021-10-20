#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n, x, p;
    int neg;
    int total = 0;
    
    while(t--){
        cin>>n>>x>>p;
        neg = n-x;
        total = (x*3) - neg;
        
        if(total >= p){
            cout << "PASS"<<endl;
        }
        else{
            cout << "FAIL"<<endl;
        }
    }
}
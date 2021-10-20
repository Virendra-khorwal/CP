#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y;
    int maxi;
    int count;
    int ocount;
    int final;
    string bs;

    while(t--){
        count = 0;
        ocount = 0;
        maxi =0;
        final = 0;
        cin >>x>>y;
        cin>>bs;

        for(int i=0;i<bs.size();i++){
            if(bs[i] == '1'){
                count++;
                ocount++;
            }
            else{
                maxi = max(maxi, count);
                count = 0;
            }
        }
        maxi = max(maxi, count);
        final = (x*ocount) + (y*maxi);
        cout << final << endl;
    }
}

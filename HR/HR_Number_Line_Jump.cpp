#include <bits/stdc++.h>

using namespace std;

int main()
{
float x1,x2,v1,v2;
cin >>x1>>v1>>x2>>v2;

float fac =0;
fac = float((x1-x2+v2-v1)/(v2-v1));

if(fac>0 && (floor(fac)==ceil(fac))){
    cout <<"YES";
}
else{
    cout << "NO";
}
}
   


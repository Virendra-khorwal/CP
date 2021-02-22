#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
vector<int>data;
vector<int>res;
int x,y,z,d;
int df = 0;
cin >> x;

while(x--){
cin >> y;
cin >>d;

	for(int i =0;i<y;i++){
	cin>>z;
	data.push_back(z);
	}	

	sort(data.begin(),data.end());

	for(int i=0;i<data.size()-d;i++){
		df = abs(data[i]-data[i+d]);
		res.push_back(df);
	}	

}
cout << *min_element(res.begin(),res.end());
}


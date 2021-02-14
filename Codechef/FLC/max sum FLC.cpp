#include <bits/stdc++.h>
using namespace std;

    int main() {
	long x;
	long items;
	long no;
    long result;
    long f;
    long s;
    long t;
	vector<long>vec;
	vector<long>res;
	cin>>x;
	while(x--){
	f,s,t,result = 0;	
	vec.clear();

	cin >>no;
	for(long i=0;i<no;i++){
		cin >> items;
		vec.push_back(items);
	}
    int n = vec.size();
    sort(vec.begin(),vec.end());
	
		 f = abs(vec[0] - vec[n-1]);
         s = abs(vec[n-1]-vec[n-2]);
         t = abs(vec[n-2]-vec[0]);

	result = f+s+t;	
	res.push_back(result);
	
	
}
		for(long i=0;i<res.size();i++){
			cout << res[i]<<endl;
		}
}

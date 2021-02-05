#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int no;
	int items;
	int sum;
	int flag =0;
	int res;
	vector<int>vec;
	vector<int>result;
	cin>>x;
	while(x--){
		
	vec.clear();
	sum=0;
	flag =0;
	cin >>no;
	for(int i=0;i<no;i++){
		cin >> items;
		vec.push_back(items);
	}
	for(int i =0;i<vec.size();i++){
		 sum += vec[i];
		
		}
	if(sum%2==0){
			flag =1;
		}
	
	
		
	if(flag >0){
	
	result.push_back(1);
}
	else{
			result.push_back(2);
		}
}
for(int i =0;i<result.size();i++){
	cout << result[i]<<endl;
	
}
}

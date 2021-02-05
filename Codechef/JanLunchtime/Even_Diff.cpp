#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int no;
	int items;
	int even =0;
	int odd = 0;
	int res;
	vector<int>vec;
	vector<int>result;
	cin>>x;
	while(x--){
	cin >>no;
	for(int i=0;i<no;i++){
		cin >> items;
		vec.push_back(items);
	}
	for(int j =0;j<vec.size();j++){
		if(vec[j]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	res = min(even,odd);
	vec.clear();
	result.push_back(res);
		
}
for(int i =0;i<result.size();i++){
	cout << result[i]<<endl;
}
}

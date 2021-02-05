#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int one;
	int two;
	int three;
	vector<int>vec;
	vector<string>result;
	cin>>x;
	while(x--){
	
		cin >> one>>two>>three;
		vec.push_back(one);
		vec.push_back(two);
		vec.push_back(three);
		
		sort(vec.begin(),vec.end());
		if(vec[2] == vec[0]+vec[1]){
			result.push_back("YES");
			
		}
		else{
			result.push_back("NO");
		}	
		vec.clear();	
	}
	for(int i =0;i<result.size();i++){
		cout << result[i]<<endl;
	}
}

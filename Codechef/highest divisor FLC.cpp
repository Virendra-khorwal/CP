#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
vector<int>result;
cin >> x;

	for(int i =1;i<11;i++){
	
		if(x%i==0){
			result.push_back(i);
		}
	}
		cout << *max_element(result.begin(),result.end());
}
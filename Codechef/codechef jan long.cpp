#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
int N,K,D;
vector<int> A;
vector<int>res;
int sum = 0;
int result;
int input;
int final;	
cin >> t;
while(t--){
	cin >> N >> K >> D;
	for(int i = 0;i< N;i++){
		cin >> input;
		A.push_back(input);
			
	}
	sum =  accumulate(A.begin(), A.end(), 0);
	 A.clear();
    result = sum/K;
	if(result > D ){
		final = D;
	}
	else{
		final = result;
	}

	res.push_back(final);
	
}

	for (int i = 0; i < res.size(); i++) 
	{
		cout << res[i] << " " ;
	}	
}

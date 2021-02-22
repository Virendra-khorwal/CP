#include<bits/stdc++.h>

using namespace std;

int main(){
int m;	
int s =0;
int flag =0;
vector<string>dd;
string str;
int x;
cin>>x;

	while(x--){
		dd.clear();
		s= 0;
	cin >>m;
	
		for(int k=0;k<m;k++){
			cin>>str;
			dd.push_back(str);
		}
	for(int i=0;i<dd.size();i++){
		if(dd[i]== "start" || dd[i] == "restart"){
			s = 1;
		}
		else{
			s = s-1;
		}
	
	}
	if(s>0){
		cout << "200"<<endl;
	}
	else{
		cout << "404"<<endl;
	}		
		
		
	
	
		
	}
	
}

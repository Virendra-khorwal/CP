#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	
	int X,A,B;
	int res = 0;
    long f = 0;
	cin >> X>>A>>B;
	res = (A + ((100-X)*B));
    f = res*10;
	cout << f<<" " ;
	}
	
	return 0;
}
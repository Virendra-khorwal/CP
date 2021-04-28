#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;


int main() {
   
    int a;
   
    cin >> a;
    string name;
    long num;
    map<string, long> m;
    cin.ignore();
    for(int i=0;i<a;i++){
     
    cin >> name;
    cin >>num;
    m[name] = num;
    }
  
   while(cin >> name) {
    if (m.find(name) != m.end()) {
        cout << name << "=" << m.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}
    return 0;
}

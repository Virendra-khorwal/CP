class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n>0){
            n = n & (n-1);
            ans++;
        }
        return ans;
    }
};

//second
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};

//implementation
#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    return(n && !n & n-1);
}

int one_count(int k){
    int count = 0;
   while(k){
    k = k & k-1;
    count++;
   }
    return count;
}


int main(){

cout << one_count(3);
}

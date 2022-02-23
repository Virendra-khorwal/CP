Problem 1: [Check If The String Is A Palindrome](https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTab=0)

Solution:
```c++

#include <vector>
bool checkPalindrome(string s)
{
   	vector < char > v;
    for(auto i: s){
        if(i>=65 && i<=90 || i>=97 && i<=122 || i>=48 && i<=57){
            v.push_back(tolower(i));
        }
    }
    int n =v.size();
 
    for( int i=0; i<n/2; i++){
        if(v[i]!=v[n-i-1]) return false;
    }
    
    return true;
}

```


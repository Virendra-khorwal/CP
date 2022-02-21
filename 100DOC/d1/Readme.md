
# DAY 1 
Problem 1 : [Reverse The Array](https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298)

Solution
```c++
void reverseArray(vector<int> &arr , int m)
{
    vector<int> v;
   
    for(int i=arr.size()-1; i>m; i--){
        v.push_back(arr[i]);
    }
    arr.erase(arr.begin()+m+1, arr.end());
    arr.insert(arr.end(),v.begin(),v.end());
}

```

Problen 2 : [Sum of Digits](https://www.codingninjas.com/codestudio/problems/sum-of-digits_1464021?leftPanelTab=0)

 Solution 
```c++
int sumofDigits(int n)
{
	if(n<10) return n;
    int sum=0;
    while(n){
        sum += n%10;
        n = n/10;
    }
    return sumofDigits(sum);
}

```



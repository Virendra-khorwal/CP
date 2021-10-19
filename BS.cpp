#include <bits/stdc++.h>

using namespace std;

int BS(int arr[], int no, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while(low<=high){
        mid = (high+low)/2;

        if(arr[mid] == no){
            return mid;
        }
        else if(arr[mid] < no){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<< BS(arr, 7, 10);
}